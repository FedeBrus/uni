package com.company.model.mutations;

import com.company.model.CantMutateException;
import com.company.model.Player;
import javafx.scene.paint.Color;

public interface Mutation {
    void addToPlayer(Player p) throws CantMutateException;
    void removeFromPlayer(Player player);
    void apply(Player p);
    void remove(Player p);
    Color getColor();
    String getName();
}
