package com.company.model;

import com.company.model.mutations.AbstractCombatMutation;
import com.company.model.mutations.AbstractMagicMutation;
import com.company.model.mutations.AbstractPotionMutation;
import com.company.model.mutations.Mutation;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class Player {
    private static final int MAX_COMBAT_MUTATIONS = 1;
    private static final int MAX_MAGIC_MUTATIONS = 1;
    private static final int MAX_POTION_MUTATIONS = 1;
    private static final int MAX_EXTRA_MUTATIONS = 1;

    private List<Mutation> combatMutations;
    private List<Mutation> magicMutations;
    private List<Mutation> potionMutations;
    private List<Mutation> extraMutations;

    private String name;
    private int level;
    private int strength;
    private int speed;
    private int tolerance;
    private Set<Spell> spells;

    public Player(String name) {
        this.name = name;
        level = 0;
        strength = 10;
        speed = 10;
        tolerance = 2;
        spells = new HashSet<>();
        combatMutations = new ArrayList<>();
        magicMutations = new ArrayList<>();
        potionMutations = new ArrayList<>();
        extraMutations = new ArrayList<>();
    }

    public int getLevel() {
        return level;
    }

    public int getStrength() {
        return strength;
    }

    public void setStrength(int strength) {
        this.strength = strength;
    }

    public int getSpeed() {
        return speed;
    }

    public void setSpeed(int speed) {
        this.speed = speed;
    }

    public int getTolerance() {
        return tolerance;
    }

    public void setTolerance(int tolerance) {
        this.tolerance = tolerance;
    }

    public void addSpell(Spell spell) {
        spells.add(spell);
    }

    public void removeSpell(Spell spell) {
        spells.remove(spell);
    }

    public void applyPotionMutation(AbstractPotionMutation abstractPotionMutation) throws CantMutateException {
        if (potionMutations.size() < MAX_POTION_MUTATIONS) {
            abstractPotionMutation.apply(this);
            potionMutations.add(abstractPotionMutation);
        } else if (extraMutations.size() < MAX_EXTRA_MUTATIONS) {
            abstractPotionMutation.apply(this);
            extraMutations.add(abstractPotionMutation);
        } else {
            throw new CantMutateException();
        }
    }

    public void applyMagicMutation(AbstractMagicMutation abstractMagicMutation) throws CantMutateException {
        if (magicMutations.size() < MAX_MAGIC_MUTATIONS) {
            abstractMagicMutation.apply(this);
            magicMutations.add(abstractMagicMutation);
        } else if (extraMutations.size() < MAX_EXTRA_MUTATIONS) {
            abstractMagicMutation.apply(this);
            extraMutations.add(abstractMagicMutation);
        } else {
            throw new CantMutateException();
        }
    }

    public void applyCombatMutation(AbstractCombatMutation abstractCombatMutation) throws CantMutateException {
        if (combatMutations.size() < MAX_COMBAT_MUTATIONS) {
            abstractCombatMutation.apply(this);
            combatMutations.add(abstractCombatMutation);
        } else if (extraMutations.size() < MAX_EXTRA_MUTATIONS) {
            abstractCombatMutation.apply(this);
            extraMutations.add(abstractCombatMutation);
        } else {
            throw new CantMutateException();
        }
    }

    public List<Mutation> getMutations() {
        List<Mutation> result = new ArrayList<>();
        result.addAll(combatMutations);
        result.addAll(magicMutations);
        result.addAll(potionMutations);
        result.addAll(extraMutations);
        return result;
    }

    public void removeCombatMutation(AbstractCombatMutation abstractCombatMutation) {
        combatMutations.remove(abstractCombatMutation);
        removeExtraMutation(abstractCombatMutation);
        abstractCombatMutation.remove(this);
    }

    public void removeMagicMutation(AbstractMagicMutation abstractMagicMutation) {
        magicMutations.remove(abstractMagicMutation);
        removeExtraMutation(abstractMagicMutation);
        abstractMagicMutation.remove(this);
    }

    public void removePotionMutation(AbstractPotionMutation abstractPotionMutation) {
        potionMutations.remove(abstractPotionMutation);
        removeExtraMutation(abstractPotionMutation);
        abstractPotionMutation.remove(this);
    }

    private void removeExtraMutation(Mutation mutation) {
        extraMutations.remove(mutation);
    }

    public Set<Spell> getSpells() {
        return spells;
    }
}
