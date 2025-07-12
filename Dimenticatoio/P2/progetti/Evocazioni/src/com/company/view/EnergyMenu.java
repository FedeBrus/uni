package com.company.view;

import javafx.geometry.Pos;
import javafx.scene.layout.VBox;

import java.util.List;

public class EnergyMenu extends VBox {
    public EnergyMenu(List<EnergyPane> eps) {
        setAlignment(Pos.BOTTOM_LEFT);
        setSpacing(10);
        getChildren().addAll(eps);
    }
}
