package com.company.view;

import com.company.control.MainController;
import com.company.control.TitleController;
import com.company.control.TitleListController;
import com.company.model.titles.Title;
import javafx.scene.control.Button;
import javafx.scene.layout.HBox;

public class TitleListPane extends HBox {
    public TitleListPane(MainController mc, TitleListController tlc) {
        Button bLeft = new Button("<");
        Button bRight = new Button(">");

        bLeft.setOnAction(_ -> tlc.goLeft());
        bRight.setOnAction(_ -> tlc.goRight());

        getChildren().add(bLeft);
        for (Title i : tlc.getCurrentTitles()) {
            TitleController tc = new TitleController(i, mc);
            getChildren().add(tc.getView());
        }
        getChildren().add(bRight);
    }
}
