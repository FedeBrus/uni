package com.company.view;

import com.company.control.TitleController;
import javafx.scene.layout.StackPane;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Text;

public class TitlePane extends StackPane {
    public TitlePane(TitleController tc) {
        Rectangle backGround = new Rectangle(130, 40);
        backGround.setFill(tc.getTitle().getColor());
        String anno = Integer.toString(tc.getTitle().getYear());
        anno = anno.substring(anno.length() - 2);
        setOnMouseClicked(tc);
        getChildren().addAll(backGround, new Text(tc.getTitle().getName() + "('" + anno + ")"));
    }
}
