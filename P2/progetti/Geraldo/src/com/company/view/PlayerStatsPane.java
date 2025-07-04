package com.company.view;

import com.company.model.Player;
import com.company.model.Spell;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.text.Text;

import java.util.List;

public class PlayerStatsPane extends VBox {
    public PlayerStatsPane(Player player) {
        setSpacing(15);
        VBox hb1 = new VBox(new Text("Lvl: " + player.getLevel()),
                            new Text("Str: " + player.getStrength()),
                            new Text("Vel: " + player.getSpeed()));

        VBox hb2 = new VBox(new Text("Tol: " + player.getTolerance()));

        VBox hb3 = new VBox(new Text("Spells: "));
        for (Spell i : player.getSpells()) {
            hb3.getChildren().add(new Text(i.name()));
        }

        getChildren().addAll(hb1, hb2, hb3);
    }
}
