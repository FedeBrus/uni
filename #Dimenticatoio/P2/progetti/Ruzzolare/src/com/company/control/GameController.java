package com.company.control;

import com.company.model.Game;
import com.company.model.InvalidWordException;
import com.company.model.leaderboard.LeaderBoardEntry;
import com.company.view.MainView;
import java.util.TreeSet;

public class GameController {
    private Game game;
    private MainView mv;

    public GameController(Game game) {
        this.game = game;
        this.mv = new MainView(this);
        refresh();
    }

    public void addPoints() {
        try {
            game.addWordPoints();
            refresh();
        } catch (InvalidWordException e) {
            System.out.println("parola non trovata");
        }
    }

    public void refresh() {
        mv.setGrid(game.getCells(), Game.SIZE, Game.SIZE);
        mv.setPoints(game.getPoints());
        mv.setWord(game.getWord());
        mv.setLeaderBoard(game.getLeaderboard());
    }

    public void addLetter(CellController cellController) {
        game.addLetter(cellController.getCell());
        refresh();
    }

    public void activateAllCells() {
        game.activateAllCells();
        refresh();
    }

    public void resetWord() {
        game.resetWord();
        refresh();
    }

    public MainView getView() {
        return mv;
    }

    public int getPoints() {
        return game.getPoints();
    }

    public void addLeaderBoardEntry(LeaderBoardEntry leaderBoardEntry) {
        game.addLeaderBoardEntry(leaderBoardEntry);
        refresh();
    }

    public void resetPoints() {
        game.resetPoints();
        refresh();
    }
}
