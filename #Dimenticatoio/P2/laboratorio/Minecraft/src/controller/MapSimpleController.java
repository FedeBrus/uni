package controller;

import model.Map;
import ui.gui.MapPane;
import util.Coordinates.Coordinates;
import util.Coordinates.WrongCoordinatesException;

public class MapSimpleController implements SimpleController {

    private Map map;
    private MapPane mapPane;

    public MapSimpleController(Map map, MapPane mapPane) {
        this.map = map;
        this.mapPane = mapPane;
    }

    public void redraw() throws WrongCoordinatesException {
        for (int i = 0; i < map.getHeight(); i++) {
            for (int j = 0; j < map.getWidth(); j++) {
                Coordinates c = new Coordinates(j, i);
                mapPane.setCell(c, map.at(c));
            }
        }
    }
}
