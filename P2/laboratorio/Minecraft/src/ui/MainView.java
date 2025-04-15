package ui;

import data.AirBlock;
import data.Block;
import data.NullBlock;
import data.SmeltableBlock;
import util.Coordinates;

public class MainView {
    private final Map map;
    private final Furnace furnace;
    private final Inventory inventory;

    public MainView(int mapWidth, int mapHeight) {
        map = new Map(mapWidth, mapHeight);
        furnace = new Furnace();
        inventory = new Inventory();
    }

    public void displayOnOut() {
        map.displayOnOut();
        furnace.displayOnOut();
        inventory.displayOnOut();
    }

    public void moveIntoFurnace(int x, int y) {
        Coordinates coords = new Coordinates(map, x, y);
        if (map.isSmeltableAt(coords)) {
            inventory.addBlock(furnace.retrieveInput());
            furnace.setInput(map.SmeltableBlockAt(coords));
            map.insertAtCoords(new AirBlock(), coords);
        }
    }

    public void smelt() {
        furnace.smelt();
    }

    public void retrieveFromFurnace() {
        Block b = furnace.retrieveOutput();
        if (!(b instanceof NullBlock)) {
            inventory.addBlock(b);
        }
    }

    public void putInFurnace(int i) {
        SmeltableBlock b = inventory.getSmeltableBlock(i);
        inventory.addBlock(furnace.retrieveInput());
        furnace.setInput(b);
    }
}
