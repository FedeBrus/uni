package com.company.model.mutations;

import com.company.model.CantMutateException;
import com.company.model.Player;
import javafx.scene.paint.Color;

public abstract class AbstractMagicMutation implements Mutation {
    @Override
    public void addToPlayer(Player p) throws CantMutateException {
        p.applyMagicMutation(this);
    }

    @Override
    public void removeFromPlayer(Player p) {
        p.removeMagicMutation(this);
    }

    @Override
    public Color getColor() {
        return Color.TEAL;
    }
}
