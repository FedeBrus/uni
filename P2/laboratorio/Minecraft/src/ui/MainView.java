package ui;

import data.AirBlock;
import data.SmeltableBlock;
import util.Coordinates;

public class MainView {
    private Map map;
    private Furnace furnace;

    public MainView(int mapWidth, int mapHeight) {
        map = new Map(mapWidth, mapHeight);
        furnace = new Furnace();
    }

    public void displayOnOut() {
        map.displayOnOut();
        furnace.displayOnOut();
    }

    public void moveIntoFurnace(int x, int y) {
        Coordinates coords = new Coordinates(map, x, y);
        if (map.isSmeltableAt(coords)) {
            furnace.setInput((SmeltableBlock) map.SmeltableBlockAt(coords));
            map.insertAtCoords(new AirBlock(), coords);
        }
    }

    public void smelt() {
        furnace.smelt();
    }
}
