package com.company.model.mutations;

import com.company.model.CantMutateException;
import com.company.model.Player;
import javafx.scene.paint.Color;

public abstract class AbstractPotionMutation implements Mutation {
    @Override
    public void addToPlayer(Player p) throws CantMutateException {
        p.applyPotionMutation(this);
    }

    @Override
    public void removeFromPlayer(Player p) {
        p.removePotionMutation(this);
    }

    @Override
    public Color getColor() {
        return Color.LIME;
    }
}
