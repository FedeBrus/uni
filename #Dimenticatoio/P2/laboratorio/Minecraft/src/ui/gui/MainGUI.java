package ui.gui;

import javafx.scene.layout.BorderPane;

public class MainGUI extends BorderPane {

    private final MapPane map;
    private final FurnacePane furnace;
    private final InventoryPane inventory;
    private final ButtonListPane buttons;

    public MainGUI(MapPane map, FurnacePane furnace, InventoryPane inventory, ButtonListPane buttons) {
        super();
        this.map = map;
        this.inventory = inventory;
        this.furnace = furnace;
        this.buttons = buttons;

        setCenter(map);
        setBottom(inventory);
        setRight(furnace);
        setLeft(buttons);
    }
}
