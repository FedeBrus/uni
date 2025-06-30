package com.company;


import com.company.model.attack.Attack;
import com.company.model.attack.BlastAttack;
import com.company.model.attack.LobberAttack;
import com.company.model.attack.SingleAttack;
import com.company.model.brawler.ArtilleryBrawler;
import com.company.model.brawler.Brawler;
import com.company.model.brawler.SniperBrawler;
import com.company.model.brawler.TankBrawler;
import com.company.view.MainView;
import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

import java.sql.Array;
import java.util.ArrayList;
import java.util.List;

public class Main extends Application {

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) throws Exception {
        List<Brawler> brawlers = new ArrayList<>();
        Brawler franco = new TankBrawler("Franco", new BlastAttack("SBAM", 1000));
        franco.levelUp();
        Brawler dinamichele = new ArtilleryBrawler("Dinamichele", new LobberAttack("Bomba", 2000));
        dinamichele.levelUp();
        dinamichele.levelUp();
        dinamichele.levelUp();
        dinamichele.levelUp();
        dinamichele.levelUp();
        dinamichele.levelUp();
        Brawler ape = new SniperBrawler("Ape", new SingleAttack("Bzz", 2000));
        ape.levelUp();
        ape.levelUp();
        ape.levelUp();
        ape.levelUp();
        ape.levelUp();
        ape.levelUp();
        ape.levelUp();
        ape.levelUp();
        Brawler edoardo = new TankBrawler("Edoardo", new SingleAttack("Sciarpa", 500));
        Brawler salice = new SniperBrawler("Salice", new LobberAttack("Tentacolo", 1200));

        brawlers.add(franco);
        brawlers.add(dinamichele);
        brawlers.add(ape);
        brawlers.add(edoardo);
        brawlers.add(salice);

        primaryStage.setTitle("Brawl");
        primaryStage.setScene(new Scene(new MainView(brawlers), 450, 450));
        primaryStage.show();
    }
}
