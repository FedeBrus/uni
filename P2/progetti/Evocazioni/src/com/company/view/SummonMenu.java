package com.company.view;

import javafx.scene.layout.HBox;

import java.util.List;

public class SummonMenu extends HBox {
    private List<SummonPane> sps;

    public SummonMenu(List<SummonPane> sps) {
        this.sps = sps;
        redraw();
    }

    public void setSps(List<SummonPane> sps) {
        this.sps = sps;
        redraw();
    }

    private void redraw() {
        getChildren().clear();
        getChildren().addAll(sps);
    }
}
