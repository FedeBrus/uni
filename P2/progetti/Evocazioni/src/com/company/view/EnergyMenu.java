package com.company.view;

import javafx.geometry.Pos;
import javafx.scene.layout.VBox;

import java.util.List;

public class EnergyMenu extends VBox {
    private List<EnergyPane> eps;

    public EnergyMenu(List<EnergyPane> eps) {
        this.eps = eps;
        setAlignment(Pos.BOTTOM_LEFT);
        setSpacing(10);
        redraw();
    }

    public void setEps(List<EnergyPane> eps) {
        this.eps = eps;
        redraw();
    }

    private void redraw() {
        getChildren().clear();
        getChildren().addAll(eps);
    }
}
