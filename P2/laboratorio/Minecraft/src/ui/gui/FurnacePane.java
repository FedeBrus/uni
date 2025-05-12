package ui.gui;

import data.NullBlock;
import javafx.geometry.Insets;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Text;

public class FurnacePane extends VBox {

    public FurnacePane() {
        super();
        insertChildren(new BlockPane(new NullBlock()), new BlockPane(new NullBlock()));
    }

    public void insertChildren(BlockPane input, BlockPane output) {
        insertLabel();
        getChildren().add(input);
        insertArrow();
        getChildren().add(output);
    }

    public void insertLabel() {
        Text label = new Text("Furnace: ");
        StackPane labelPane = new StackPane();
        labelPane.getChildren().add(new Rectangle(80, 50, Color.WHITE));
        labelPane.getChildren().add(label);
        getChildren().add(labelPane);
    }

    public void insertArrow() {
        Text arrow = new Text("-->");
        StackPane arrowPane = new StackPane();
        arrowPane.getChildren().add(new Rectangle(50, 50, Color.WHITE));
        arrowPane.getChildren().add(arrow);
        getChildren().add(arrow);
    }
}
