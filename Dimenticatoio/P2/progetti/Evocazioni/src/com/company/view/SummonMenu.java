package com.company.view;

import javafx.scene.layout.HBox;

import java.util.List;

public class SummonMenu extends HBox {
    public SummonMenu(List<SummonPane> sps) {
        getChildren().addAll(sps);
    }
}
