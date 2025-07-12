package com.company.model.brawlers;

import com.company.model.CantLevelUpException;
import com.company.model.attacks.Attack;

public abstract class AbstractBrawler implements Brawler {
    private static final int MAX_LEVEL = 11;
    private String name;
    private int level;
    private Attack attack;

    public AbstractBrawler(String name, int level, Attack attack) {
        this.name = name;
        this.level = Math.min(level, MAX_LEVEL);
        this.attack = attack;
    }

    protected abstract int getMinHealthPoints();
    protected abstract int getMaxHealthPoints();

    @Override
    public String getName() {
        return name;
    }

    @Override
    public int getLevel() {
        return level;
    }

    @Override
    public Attack getAttack() {
        return attack;
    }

    @Override
    public void levelUp() throws CantLevelUpException {
        if (level < MAX_LEVEL) {
            level++;
        } else {
            throw new CantLevelUpException();
        }
    }

    @Override
    public int getHealthPoints() {
        int increment = getMinHealthPoints() / 10;
        return Math.min(getMinHealthPoints() + increment * level, getMaxHealthPoints());
    }

    @Override
    public int getDamage() {
        int increment = attack.getBaseDamage() / 10;
        return attack.getBaseDamage() + increment * level;
    }

    @Override
    public int compareTo(Brawler b2) {
        return name.compareTo(b2.getName());
    }
}
