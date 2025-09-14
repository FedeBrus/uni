package com.company.view;

import com.company.model.mutations.Mutation;
import javafx.scene.layout.VBox;
import javafx.scene.text.Text;

import java.util.List;

public class PlayerMutationsPane extends VBox {
    public PlayerMutationsPane(List<Mutation> mutations) {
        getChildren().add(new Text("Mutations: "));
        for (Mutation i : mutations) {
            Text t = new Text(i.getName());
            t.setFill(i.getColor());
            getChildren().add(t);
        }
    }
}
