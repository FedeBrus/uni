package com.company.control;

import com.company.model.leaderboard.LeaderBoardEntry;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.control.TextInputDialog;

public class TerminateController implements EventHandler<ActionEvent> {
    private GameController gc;

    public TerminateController(GameController gc) {
        this.gc = gc;
    }

    @Override
    public void handle(ActionEvent actionEvent) {
        TextInputDialog td = new TextInputDialog("Nome: ");
        td.showAndWait();
        gc.addLeaderBoardEntry(new LeaderBoardEntry(td.getEditor().getText(), gc.getPoints()));
        gc.resetWord();
        gc.resetPoints();
    }
}
