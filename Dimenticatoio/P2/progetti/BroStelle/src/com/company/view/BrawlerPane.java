package com.company.view;

import com.company.model.brawler.Brawler;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Text;

public class BrawlerPane extends StackPane {
    private static final int SIZE = 90;
    private Rectangle backGround;
    private Text nameLabel;

    public BrawlerPane() {
        nameLabel = new Text();
        backGround = new Rectangle(SIZE, SIZE);
        this.getChildren().addAll(backGround, nameLabel);
    }

    public void setColor(Color color) {
        backGround.setFill(color);
    }

    public void setName(String name) {
        nameLabel.setText(name);
    }
}
