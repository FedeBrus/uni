package com.company.view;

import com.company.control.CellController;
import com.company.control.FindController;
import com.company.control.GameController;
import com.company.control.TerminateController;
import com.company.model.Cell;
import com.company.model.leaderboard.LeaderBoardEntry;
import javafx.event.ActionEvent;
import javafx.scene.control.Button;
import javafx.scene.input.KeyCode;
import javafx.scene.input.KeyEvent;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.text.Text;

import java.util.Set;

public class MainView extends VBox {

    private GridPane grid;
    private VBox lb;
    private HBox hb1;
    private HBox hb2;
    private Button findButton;
    private Button terminateButton;
    private Text word;
    private Text points;
    private GameController gc;

    public MainView(GameController gc) {
        this.gc = gc;
        grid = new GridPane();
        lb = new VBox();

        //HB1
        hb1 = new HBox();
        findButton = new Button("Trova");
        findButton.setOnAction(new FindController(gc));
        word = new Text();
        hb1.getChildren().addAll(findButton, word);

        // HB2
        hb2 = new HBox();
        terminateButton = new Button("Termina");
        terminateButton.setOnAction(new TerminateController(gc));
        points = new Text();
        hb2.getChildren().addAll(terminateButton, points);

        getChildren().addAll(grid, hb1, hb2);
        setOnKeyPressed((KeyEvent e) -> {
            if (e.getCode() == KeyCode.SPACE) {
                findButton.fireEvent(new ActionEvent());
            } else if (e.getCode() == KeyCode.T) {
                terminateButton.fireEvent(new ActionEvent());
            }
        });
    }

    public void setGrid(Cell[][] cells, int x, int y) {
        grid = new GridPane(x, y);
        grid.setHgap(0);
        grid.setVgap(0);
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < x; j++) {
                CellController cc = new CellController(gc, cells[i][j]);
                grid.add(cc.getView(), i, j);
            }
        }
        getChildren().clear();
        getChildren().addAll(grid, hb1, hb2, lb);
    }

    public void setPoints(int points) {
        this.points.setText("Punteggio: " + points);
    }

    public void setWord(String word) {
        this.word.setText("Parola corrente: " + word);
    }

    public void setLeaderBoard(Set<LeaderBoardEntry> leaderboard) {
        lb.getChildren().clear();
        for (LeaderBoardEntry i : leaderboard) {
            lb.getChildren().add(new Text(i.getName() + ": " + i.getPoints()));
        }
        getChildren().clear();
        getChildren().addAll(grid, hb1, hb2, lb);
    }
}
