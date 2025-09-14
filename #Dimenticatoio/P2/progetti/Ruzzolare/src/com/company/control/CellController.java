package com.company.control;

import com.company.model.Cell;
import com.company.view.CellPane;
import javafx.event.EventHandler;
import javafx.scene.input.MouseEvent;

public class CellController implements EventHandler<MouseEvent> {
    private Cell cell;
    private CellPane cp;
    private GameController gc;

    public CellController(GameController gc, Cell cell) {
        this.cell = cell;
        this.gc = gc;
        cp = new CellPane(this);
    }

    public CellPane getView() {
        return cp;
    }

    @Override
    public void handle(MouseEvent mouseEvent) {
        if (cell.isActivated()) {
            cell.deactivate();
            gc.addLetter(this);
        }
    }

    public Cell getCell() {
        return cell;
    }
}
