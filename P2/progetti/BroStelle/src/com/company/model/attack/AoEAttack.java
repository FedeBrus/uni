package com.company.model.attack;

public abstract class AoEAttack extends AbstractAttack {
    public AoEAttack(String name, int baseDamage) {
        super(name, baseDamage);
    }

    public int getRange() {
        return 100;
    }
}
