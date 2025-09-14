package com.company.view;

import com.company.control.BrawlerController;
import javafx.scene.layout.StackPane;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Text;

public class BrawlerPane extends StackPane {
    public BrawlerPane(BrawlerController bc) {
        Rectangle r = new Rectangle(70, 70);
        r.setFill(bc.getBrawler().getColor());
        setOnMouseClicked(bc);
        getChildren().addAll(r, new Text(bc.getBrawler().getName()));
    }
}
