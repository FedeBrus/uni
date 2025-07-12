package com.company.view;

import javafx.scene.layout.StackPane;
import javafx.scene.text.Text;

public class GeraldoPane extends StackPane {
    private final Text label;

    public GeraldoPane(int level, int goldPoints) {
        label = new Text();
        setLabel(level, goldPoints);
        getChildren().add(label);
    }

    public void setLabel(int level, int goldPoints) {
        label.setText("Geraldo. LV: " + level + " GP: " + goldPoints);
    }
}
