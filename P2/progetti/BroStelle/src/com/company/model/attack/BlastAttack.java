package com.company.model.attack;

public class BlastAttack extends AoEAttack {
    public BlastAttack(String name, int baseDamage) {
        super(name, baseDamage);
    }

    public Trajectory getTrajectory() {
        return Trajectory.GROUND;
    }
}
