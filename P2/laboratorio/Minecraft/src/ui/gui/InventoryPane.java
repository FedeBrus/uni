package ui.gui;

import javafx.scene.layout.HBox;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Text;

public class InventoryPane extends HBox {
    private final HBox inventory;

    public InventoryPane() {
        super();
        Text label = new Text("Inventory: ");
        StackPane labelPane = new StackPane();
        labelPane.getChildren().add(new Rectangle(50, 50, Color.WHITE));
        labelPane.getChildren().add(label);
        inventory = new HBox();
        getChildren().addAll(labelPane, inventory);
    }

    public void addBlock(BlockPane bp) {
        inventory.getChildren().add(bp);
    }
}
