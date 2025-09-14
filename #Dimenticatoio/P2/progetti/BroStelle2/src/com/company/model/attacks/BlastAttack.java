package com.company.model.attacks;

public class BlastAttack extends AbstractAoEAttack {
    public BlastAttack(String name, int baseDamage) {
        super(name, baseDamage);
    }

    @Override
    public Trajectory getTrajectory() {
        return Trajectory.GROUND;
    }
}
