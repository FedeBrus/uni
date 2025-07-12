package com.company.view;

import com.company.control.CellController;
import com.company.model.Cell;
import com.company.model.letters.Letter;
import com.sun.javafx.sg.prism.NGLightBase;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Text;

public class CellPane extends StackPane {
    private static final int SIZE = 70;
    private static final int BORDER_SIZE = 1;
    private Rectangle r;

    public CellPane(CellController cc) {
        r = new Rectangle(SIZE, SIZE);
        r.setFill(cc.getCell().isActivated() ? Color.GRAY : Color.ORANGE);
        r.setStrokeWidth(BORDER_SIZE);
        r.setStroke(cc.getCell().getBonus().getColor());
        setOnMouseClicked(cc);
        getChildren().addAll(r, new Text(cc.getCell().getLetter().getText() + " " + cc.getCell().getBonus().getText()));
    }
}
