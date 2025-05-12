package controller;

import ui.Map;
import ui.gui.MapPane;

public class MapSimpleController implements SimpleController {

    private Map map;
    private MapPane mapPane;

    public MapSimpleController(Map map, MapPane mapPane) {
        this.map = map;
        this.mapPane = mapPane;
    }

    public void redraw() {

    }
}
