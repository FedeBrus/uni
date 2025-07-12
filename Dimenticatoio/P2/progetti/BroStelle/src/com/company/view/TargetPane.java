package com.company.view;

import com.company.model.target.Target;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.control.Button;
import javafx.scene.layout.HBox;
import javafx.scene.text.Text;

public class TargetPane extends HBox {
    private Text healthPointsLabel;
    private Button resetButton;

    public TargetPane() {
        healthPointsLabel = new Text();
        resetButton = new Button("Reset");
        getChildren().addAll(healthPointsLabel, resetButton);
    }

    public void setHp(int hp) {
        healthPointsLabel.setText("HP " + Integer.toString(hp));
    }

    public void setReset(EventHandler<ActionEvent> handler) {
        resetButton.setOnAction(handler);
    }
}
