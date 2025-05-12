package controller;

import ui.gui.InventoryPane;
import ui.inventory.Inventory;

public class InventoryController implements SimpleController {

    private Inventory inventory;
    private InventoryPane inventoryPane;

    public InventoryController(Inventory inventory, InventoryPane inventoryPane) {
        this.inventory = inventory;
        this.inventoryPane = inventoryPane;
        redraw();
    }

    public void redraw() {
        inventoryPane.getChildren().clear();
        inventoryPane.insertChildren(inventory);
    }
}
