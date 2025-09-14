package com.company.view;

import javafx.scene.layout.HBox;
import javafx.scene.text.Text;

public class UserPane extends HBox {
    public UserPane(int budget, int monthlyExpenses, int months) {
        setSpacing(5);
        getChildren().add(new Text("Capitale: " + budget));
        getChildren().add(new Text("Spesa mensile: " + monthlyExpenses));
        getChildren().add(new Text("Mesi trascorsi: " + months));
    }
}
