package com.company.model.attack;

public class LobberAttack extends AoEAttack {
    public LobberAttack(String name, int baseDamage) {
        super(name, baseDamage);
    }

    public Trajectory getTrajectory() {
        return Trajectory.AIR;
    }
}
