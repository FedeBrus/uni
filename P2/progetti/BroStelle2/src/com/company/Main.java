package com.company;


import com.company.control.BrawlerController;
import com.company.control.MainController;
import com.company.control.TargetController;
import com.company.model.BrawlerList;
import com.company.model.Target;
import com.company.model.attacks.BlastAttack;
import com.company.model.attacks.LobberAttack;
import com.company.model.attacks.SingleAttack;
import com.company.model.brawlers.ArtilleryBrawler;
import com.company.model.brawlers.Brawler;
import com.company.model.brawlers.SniperBrawler;
import com.company.model.brawlers.TankBrawler;
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
        MainController mc = new MainController();

        primaryStage.setTitle("Hello World");
        primaryStage.setScene(new Scene(mc.getView(), 300, 275));
        primaryStage.show();
    }
}
