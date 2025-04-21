package ui;

import data.*;
import ui.inventory.Inventory;
import util.Coordinates;
import util.WrongCoordinatesException;

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

    public void pickUp(Coordinates coords) throws WrongCoordinatesException {
        try {
            inventory.addBlock(map.pickableBlockAt(coords));
            map.removeAt(coords);
        } catch (BlockErrorException bee) {
            System.out.println(bee.getMessage());
        }
    }

    public void smelt() {
        furnace.smelt();
    }

    public void toggleInventoryComparator() {
        inventory.toggleComaprator();
    }

    public void retrieveOutputFromFurnace() {
        Block b = furnace.retrieveOutput();
        if (!(b instanceof NullBlock)) {
            inventory.addBlock(b);
        }
    }

    public void retrieveInputFromFurnace() {
        Block b = furnace.retrieveInput();
        if (!(b instanceof NullBlock)) {
            inventory.addBlock(b);
        }
    }

    public void putInFurnace(int i) {
        try {
            SmeltableBlock b = inventory.getSmeltableBlock(i);
            inventory.addBlock(furnace.retrieveInput());
            furnace.setInput(b);
        } catch (BlockErrorException bee) {
            System.out.println(bee.getMessage());
        }
    }
}
