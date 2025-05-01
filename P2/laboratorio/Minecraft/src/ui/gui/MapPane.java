package ui.gui;

import javafx.scene.Node;
import javafx.scene.layout.GridPane;
import data.*;
import util.Coordinates;
import util.WrongCoordinatesException;

public class MapPane extends GridPane {
    private final int width = 10;
    private final int height = 10;

    public MapPane() {
        super();
        initializeAir();
    }

    private void initializeAir() {
        for (int i = 0; i < width; i++) {
            for (int j = 0; j < height; j++) {
                this.add(new BlockPane(new AirBlock()), j, i);
            }
        }
    }

    private BlockPane at(Coordinates coords) throws WrongCoordinatesException {
        if (isInRange(coords)) {
            for (Node bp : getChildren()) {
                if ((GridPane.getRowIndex(bp) == coords.getY()) && (GridPane.getColumnIndex(bp) == coords.getX())) {
                    return (BlockPane)bp;
                }
            }
        }

        throw new WrongCoordinatesException("Coordinates out of bounds");
    }

    private boolean isInRange(Coordinates coords) {
        if (coords != null) {
            return (coords.getX() >= 0 && coords.getX() < width && coords.getY() >= 0 && coords.getY() < height);
        } else {
            return false;
        }
    }

    public void setCell(Coordinates coords, Block newBlock) throws WrongCoordinatesException {
        at(coords).changeBlock(newBlock);
    }
}
