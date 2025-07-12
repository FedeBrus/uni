package com.company.model.mutations;

import com.company.model.Player;

public class ToleranceMutation extends AbstractPotionMutation {
    private static final int TOLERACE_BONUS = 2;

    @Override
    public void apply(Player p) {
        p.setTolerance(p.getTolerance() + TOLERACE_BONUS);
    }

    @Override
    public void remove(Player p) {
        p.setTolerance(p.getTolerance() - TOLERACE_BONUS);
    }

    @Override
    public String getName() {
        return "Tol";
    }
}
