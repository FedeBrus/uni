package com.company.view;

import javafx.scene.layout.HBox;

public class MainPane extends HBox {
    public void setColumns(CategoryPane... cps) {
        getChildren().clear();
        getChildren().addAll(cps);
    }
}
