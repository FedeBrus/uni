package com.company.model.attack;

public class SingleAttack extends AbstractAttack {
    public SingleAttack(String name, int baseDamage) {
        super(name, baseDamage);
    }

    public int getRange() {
        return 150;
    }

    public Trajectory getTrajectory() {
        return Trajectory.GROUND;
    }
}
