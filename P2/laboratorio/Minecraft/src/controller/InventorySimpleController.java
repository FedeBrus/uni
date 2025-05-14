package controller;

import data.Block;
import data.SandBlock;
import ui.gui.BlockPane;
import ui.gui.InventoryPane;
import model.inventory.Inventory;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

public class InventorySimpleController implements SimpleController {

    private Inventory inventory;
    private InventoryPane inventoryPane;

    public InventorySimpleController(Inventory inventory, InventoryPane inventoryPane) {
        this.inventory = inventory;
        inventory.addBlock(new SandBlock());
        inventory.addBlock(new SandBlock());
        inventory.addBlock(new SandBlock());
        inventory.addBlock(new SandBlock());
        this.inventoryPane = inventoryPane;
        redraw();
    }

    public void redraw() {
        inventoryPane.getChildren().clear();
        Iterator<Block> blocks = inventory.getIterator();
        List<BlockPane> blockPanes = new LinkedList<>();
        while (blocks.hasNext()) {
            blockPanes.add(new BlockPane(blocks.next()));
        }
        inventoryPane.insertChildren(blockPanes);
    }
}
