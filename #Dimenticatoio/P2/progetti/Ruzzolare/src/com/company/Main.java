package com.company;


import com.company.control.GameController;
import com.company.model.Game;
import com.company.view.MainView;
import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

import java.util.HashSet;
import java.util.Set;

public class Main extends Application {

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) throws Exception {
        Set<String> allowedWords = new HashSet<>();
        allowedWords.add("ARE");
        allowedWords.add("ERE");
        allowedWords.add("ERA");
        allowedWords.add("REA");
        allowedWords.add("REE");
        allowedWords.add("ERRE");
        allowedWords.add("ERRA");
        allowedWords.add("AREA");
        allowedWords.add("AEREE");
        allowedWords.add("AEREA");
        allowedWords.add("ERRARE");
        allowedWords.add("ARREARE");
        GameController gc = new GameController(new Game(allowedWords));
        primaryStage.setTitle("Hello World");
        primaryStage.setScene(new Scene(gc.getView(), 300, 275));
        primaryStage.show();
    }
}
