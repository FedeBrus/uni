package com.company.model.mutations;

import com.company.model.Player;

public class StrengthMutation extends AbstractCombatMutation {
    private static final int STRENGTH_BONUS = 2;

    @Override
    public void apply(Player p) {
        p.setStrength(p.getStrength() + STRENGTH_BONUS);
    }

    @Override
    public void remove(Player p) {
        p.setStrength(p.getStrength() - STRENGTH_BONUS);
    }

    @Override
    public String getName() {
        return "Str";
    }
}
