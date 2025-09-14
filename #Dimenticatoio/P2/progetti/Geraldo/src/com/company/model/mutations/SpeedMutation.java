package com.company.model.mutations;

import com.company.model.Player;

public class SpeedMutation extends AbstractCombatMutation {
    private static final int SPEED_BONUS = 2;

    @Override
    public void apply(Player p) {
        p.setSpeed(p.getSpeed() + SPEED_BONUS);
    }

    @Override
    public void remove(Player p) {
        p.setSpeed(p.getSpeed() - SPEED_BONUS);
    }

    @Override
    public String getName() {
        return "Vel";
    }
}
