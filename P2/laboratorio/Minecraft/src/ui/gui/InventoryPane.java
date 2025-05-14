package ui.gui;

import javafx.scene.layout.HBox;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Text;

import java.util.Collection;

public class InventoryPane extends HBox {
    private final HBox inventory;

    public InventoryPane() {
        super();
        insertLabel();
        inventory = new HBox();
        getChildren().add(inventory);
    }

    public void insertBlock(BlockPane bp) {
        inventory.getChildren().add(bp);
    }

    public void insertChildren(Collection<BlockPane> blocks) {
        insertLabel();
        getChildren().addAll(blocks);
    }

    private void insertLabel() {
        Text label = new Text("Inventory: ");
        StackPane labelPane = new StackPane();
        labelPane.getChildren().add(new Rectangle(100, 50, Color.WHITE));
        labelPane.getChildren().add(label);
        getChildren().add(labelPane);
    }
}
