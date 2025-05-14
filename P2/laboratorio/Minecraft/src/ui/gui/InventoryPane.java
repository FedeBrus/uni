package ui.gui;

import data.AirBlock;
import data.WaterBlock;
import data.SandBlock;
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
        labelPane.getChildren().add(new Rectangle(100, 50, Color.WHITE));
        labelPane.getChildren().add(label);
        inventory = new HBox();
        addBlock(new BlockPane(new SandBlock()));
        addBlock(new BlockPane(new AirBlock()));
        addBlock(new BlockPane(new WaterBlock()));
        getChildren().addAll(labelPane, inventory);
    }

    public void addBlock(BlockPane bp) {
        inventory.getChildren().add(bp);
    }
}
