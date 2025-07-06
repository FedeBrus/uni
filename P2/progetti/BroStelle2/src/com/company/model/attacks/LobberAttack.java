package com.company.model.attacks;

public class LobberAttack extends AbstractAoEAttack {
    public LobberAttack(String name, int baseDamage) {
        super(name, baseDamage);
    }

    @Override
    public Trajectory getTrajectory() {
        return Trajectory.AIR;
    }
}
