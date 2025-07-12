package com.company.model.brawler;

import com.company.model.attack.Attack;

public abstract class AbstractBrawler implements Brawler {
    private static final int MAX_LEVEL = 11;
    private static final int INCREMENT_RATIO = 10;

    private String name;
    private int level;
    private int healthPoints;
    private Attack attack;

    public AbstractBrawler(String name, Attack attack) {
        this.name = name;
        this.attack = attack;
        level = 1;
        healthPoints = getMinHealthPoints();
    }

    public void levelUp() throws LevelUpException {
        if (level < MAX_LEVEL) {
            level++;
            healthPoints += getHealthPointsIncrement();
            if (healthPoints > getMaxHealthPoints()) {
                healthPoints = getMaxHealthPoints();
            }
        } else {
            throw new LevelUpException("Max level was reached");
        }
    }

    protected abstract int getMinHealthPoints();
    protected abstract int getMaxHealthPoints();

    private int getHealthPointsIncrement() {
        return getMinHealthPoints() / INCREMENT_RATIO;
    }

    public String getName() {
        return name;
    }

    public int getLevel() {
        return level;
    }

    public int getHealthPoints() {
        return healthPoints;
    }

    public Attack getAttack() {
        return attack;
    }

    public int compareTo(Brawler b) {
        return name.compareTo(b.getName());
    }
}
