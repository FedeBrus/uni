package com.company.model.attack;

public abstract class AbstractAttack implements Attack {
    private static final int DAMAGE_INCREMENT_RATIO = 10;
    private final String name;
    private final int baseDamage;

    public AbstractAttack(String name, int baseDamage) {
        this.name = name;
        this.baseDamage = baseDamage;
    }

    public String getName() {
        return name;
    }

    private int getBaseDamage() {
        return baseDamage;
    }

    private int getDamageIncrement() {
        return baseDamage / DAMAGE_INCREMENT_RATIO;
    }

    public int getDamage(int level) {
        return getBaseDamage() + getDamageIncrement() * (level - 1);
    }
}
