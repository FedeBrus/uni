package com.company.view;

import com.company.control.TargetController;
import javafx.scene.control.Button;
import javafx.scene.layout.HBox;
import javafx.scene.text.Text;

public class TargetPane extends HBox {
    public TargetPane(TargetController tc) {
        Button resetButton = new Button("Reset");
        resetButton.setOnAction(tc);
        getChildren().addAll(new Text("HP " + tc.getTarget().getHealthPoints()), resetButton);
    }
}
