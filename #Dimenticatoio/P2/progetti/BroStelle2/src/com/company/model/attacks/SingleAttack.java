package com.company.model.attacks;

public class SingleAttack extends AbstractAttack {
    public SingleAttack(String name, int baseDamage) {
        super(name, baseDamage);
    }

    @Override
    public int getRange() {
        return 150;
    }

    @Override
    public Trajectory getTrajectory() {
        return Trajectory.GROUND;
    }
}
