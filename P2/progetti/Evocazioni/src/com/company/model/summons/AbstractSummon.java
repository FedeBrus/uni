package com.company.model.summons;

import com.company.model.WrongEnergyException;
import com.company.model.energies.Attack;
import com.company.model.energies.Energy;
import com.company.model.energies.EnergyType;

public abstract class AbstractSummon implements Summon {
    private String name;
    private final int totalHealthPoints;
    private int currentHealthPoints;
    private Energy energy;
    private int appliedEnergiesNumber;
    private Attack attack;

    public AbstractSummon(String name, int healthPoints, Energy energy, Attack attack) {
        this.name = name;
        this.totalHealthPoints = healthPoints;
        this.currentHealthPoints = healthPoints;
        this.energy = energy;
        this.attack = attack;
        appliedEnergiesNumber = 0;
    }

    public String getName() {
        return name;
    }

    @Override
    public int getTotalHealthPoints() {
        return totalHealthPoints;
    }

    @Override
    public int getHealthPoints() {
        return currentHealthPoints;
    }

    @Override
    public int getAppliedEnergiesNumber() {
        return appliedEnergiesNumber;
    }

    @Override
    public Energy getEnergy() {
        return energy;
    }

    @Override
    public Attack getAttack() {
        return attack;
    }

    @Override
    public void applyEnergy(Energy energy) {
        if (energy.getType() == EnergyType.NEUTRAL || energy.getType() == this.energy.getType()) {
            appliedEnergiesNumber++;
        } else {
            throw new WrongEnergyException();
        }
    }

    @Override
    public void receiveAttack(Summon attacker) {
        currentHealthPoints -= attacker.getAttack().getDamage() * (attacker.getEnergy().isStrong(energy.getType()) ? 2 : 1);
        if (currentHealthPoints <= 0) {
            currentHealthPoints = 0;
        }
    }

    @Override
    public boolean isReadyToAttack() {
        return appliedEnergiesNumber >= attack.getRequiredEnergy();
    }

    @Override
    public boolean isDead() {
        return (currentHealthPoints == 0);
    }
}
