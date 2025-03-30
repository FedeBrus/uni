package ui;

import data.AirBlock;
import data.SmeltableBlock;

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
        if (map.isSmeltableAt(x, y)) {
            furnace.setInput((SmeltableBlock) map.SmeltableBlockAt(x, y));
            map.insertAtCoords(new AirBlock(), x, y);
        }
    }

    public void smelt() {
        furnace.smelt();
    }
}
