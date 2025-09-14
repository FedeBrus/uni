package com.company.model.target;

public class Target {
    private static final int STARTING_HEALTH_POINTS = 10000;
    private int healthPoints;

    public Target() {
        healthPoints = STARTING_HEALTH_POINTS;
    }

    public void applyDamage(int damage) throws TargetDeadException {
        healthPoints -= damage;
        if (healthPoints < 0) {
            healthPoints = 0;
            throw new TargetDeadException("Target is dead");
        }
    }

    public void resetHealthPoints() {
        healthPoints = STARTING_HEALTH_POINTS;
    }

    public int getHealthPoints() {
        return healthPoints;
    }
}
