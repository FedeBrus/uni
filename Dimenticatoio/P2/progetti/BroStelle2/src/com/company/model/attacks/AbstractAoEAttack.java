package com.company.model.attacks;

public abstract class AbstractAoEAttack extends AbstractAttack {
    public AbstractAoEAttack(String name, int baseDamage) {
        super(name, baseDamage);
    }

    @Override
    public int getRange() {
        return 100;
    }
}
