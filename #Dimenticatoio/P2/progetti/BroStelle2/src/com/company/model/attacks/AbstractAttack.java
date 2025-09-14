package com.company.model.attacks;

public abstract class AbstractAttack implements Attack {
    private String name;
    private int baseDamage;

    public AbstractAttack(String name, int baseDamage) {
        this.name = name;
        this.baseDamage = baseDamage;
    }

    @Override
    public String getName() {
        return name;
    }

    @Override
    public int getBaseDamage() {
        return baseDamage;
    }
}
