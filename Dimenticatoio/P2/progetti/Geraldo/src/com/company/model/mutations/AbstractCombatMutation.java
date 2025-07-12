package com.company.model.mutations;

import com.company.model.CantMutateException;
import com.company.model.Player;
import javafx.scene.paint.Color;

public abstract class AbstractCombatMutation implements Mutation {
    @Override
    public void addToPlayer(Player p) throws CantMutateException {
        p.applyCombatMutation(this);
    }

    @Override
    public void removeFromPlayer(Player p) {
        p.removeCombatMutation(this);
    }

    @Override
    public Color getColor() {
        return Color.RED;
    }
}
