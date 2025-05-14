package controller;

import model.Furnace;
import ui.gui.BlockPane;
import ui.gui.FurnacePane;

public class FurnaceSimpleController implements SimpleController {
    private final Furnace furnace;
    private final FurnacePane furnacePane;

    public FurnaceSimpleController(Furnace furnace, FurnacePane furnacePane) {
        this.furnace = furnace;
        this.furnacePane = furnacePane;
        redraw();
    }

    public void redraw() {
        furnacePane.getChildren().clear();
        furnacePane.insertChildren(new BlockPane(furnace.getInput()), new BlockPane(furnace.getOutput()));
    }
}
