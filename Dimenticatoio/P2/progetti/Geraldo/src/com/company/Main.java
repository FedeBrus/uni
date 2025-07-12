package com.company;


import com.company.control.PlayerController;
import com.company.model.Player;
import com.company.model.mutations.*;
import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

import java.util.ArrayList;
import java.util.List;

public class Main extends Application {

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) throws Exception {
        Player p = new Player("Geraldo");
        Mutation m1 = new StrengthMutation();
        Mutation m2 = new SpeedMutation();
        Mutation m3 = new ToleranceMutation();
        Mutation m4 = new FireMutation();
        Mutation m5 = new DefenseMutation();

        List<Mutation> availableMutations = new ArrayList<>();
        availableMutations.add(m1);
        availableMutations.add(m2);
        availableMutations.add(m3);
        availableMutations.add(m4);
        availableMutations.add(m5);

        PlayerController pc = new PlayerController(p, availableMutations);

        primaryStage.setTitle("Hello World");
        primaryStage.setScene(new Scene(pc.getMainView(), 400, 400));
        primaryStage.show();
    }
}
