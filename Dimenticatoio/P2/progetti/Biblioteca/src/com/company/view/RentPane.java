package com.company.view;

import com.company.control.RentController;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;
import javafx.scene.layout.HBox;

public class RentPane extends HBox {
    public RentPane(RentController rc) {
        Button rentButton = new Button("Prestito");
        TextField textField = new TextField();
        rentButton.setOnAction(_ -> {
            if (!textField.getText().isEmpty()) {
                int days = Integer.parseInt(textField.getText());
                rc.rent(days);
            } else {
                System.out.println("NON te ghe inserio un casso");
            }
        });

        if (!rc.getPlc().isCurrentAvailable()) {
            rentButton.setDisable(true);
        }

        setSpacing(10);
        getChildren().addAll(rentButton, textField);
    }
}
