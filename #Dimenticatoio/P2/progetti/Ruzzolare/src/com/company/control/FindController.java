package com.company.control;

import com.company.model.InvalidWordException;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;

public class FindController implements EventHandler<ActionEvent> {

    private GameController game;

    public FindController(GameController game) {
        this.game = game;
    }

    @Override
    public void handle(ActionEvent actionEvent) {
        game.addPoints();
        game.activateAllCells();
        game.resetWord();
        game.refresh();
    }
}
