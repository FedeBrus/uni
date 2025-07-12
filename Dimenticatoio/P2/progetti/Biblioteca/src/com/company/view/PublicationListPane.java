package com.company.view;

import com.company.control.PublicationListController;
import javafx.geometry.Pos;
import javafx.scene.control.Button;
import javafx.scene.layout.HBox;

public class PublicationListPane extends HBox {
    public PublicationListPane(PublicationListController plc) {
        PublicationPane pp = new PublicationPane(plc.getCurrentPublication());
        Button leftButton = new Button("<");
        Button rightButton = new Button(">");
        leftButton.setOnAction(_ -> plc.goLeft());
        rightButton.setOnAction(_ -> plc.goRight());

        if (plc.isAtLeftExtreme()) {
            leftButton.setDisable(true);
        }

        if (plc.isAtRightExtreme()) {
            rightButton.setDisable(true);
        }

        setAlignment(Pos.CENTER);
        setSpacing(10);
        getChildren().addAll(leftButton, pp, rightButton);
    }
}
