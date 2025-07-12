package com.company.model;

public class Target {
    private int healthPoints;

    public Target() {
        reset();
    }

    public void applyDamage(int damage) throws TargetDeadException {
        healthPoints = Math.max(0, healthPoints - damage);
        if (healthPoints == 0) {
            throw new TargetDeadException();
        }
    }

    public int getHealthPoints() {
        return healthPoints;
    }

    public void reset() {
        healthPoints = 10000;
    }
}
