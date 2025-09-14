package com.company;


import com.company.control.CategoryController;
import com.company.control.GeraldoController;
import com.company.control.QuestController;
import com.company.model.Geraldo;
import com.company.model.quests.*;
import com.company.view.*;
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

import java.util.ArrayList;
import java.util.List;

public class Main extends Application {

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) throws Exception {
        Geraldo geraldo = new Geraldo();
        GeraldoController gc = new GeraldoController(geraldo);

        // MAIN QUESTS
        MainQuest q1 = new MainQuest("Lilac and Gooseberries", 2, "White Orchard");
        MainQuest q2 = new MainQuest("The Nilfagaardian Connection", 3, "Velen");
        MainQuest q3 = new MainQuest("Pyres of Novigrad", 5, "Novigrad");
        q1.setNextQuest(q2);
        q2.setNextQuest(q3);
        q2.setPrevQuest(q1);
        q3.setPrevQuest(q2);

        // SECONDARY QUESTS
        SecondaryQuest q4 = new SecondaryQuest("A Favor for a Friend", 2, 10, "Keria Melz");
        SecondaryQuest q5 = new SecondaryQuest("The Last Wish", 6, 30, "Bloody Baron");

        // CONTRACT QUESTS
        ContractQuest q6 = new ContractQuest("Swamp Thing", 12, 40, List.of("Drowners", "Froglet"));
        TreasureHuntQuest q7 = new TreasureHuntQuest("Coast of Wrecks", 4, 50, List.of("Drowners"), "Novigrad");
        TreasureHuntQuest q8 = new TreasureHuntQuest("Dirty Funds", 1, 20, List.of("Wolves", "Drowners"), "Velen");

        // DLC QUESTS
        DLCQuest q10 = new DLCQuest("Capture the castle", 9, "Toussaint");
        DLCQuest q9 = new DLCQuest("Envoys Wineboys", 8, "Velen");
        q9.setPrevQuest(q2);
        q10.setPrevQuest(q2);
        q9.setNextQuest(q10);

        // CONTROLLERS
        QuestController qc1 = new QuestController(q1, gc);
        QuestController qc2 = new QuestController(q2, gc);
        QuestController qc3 = new QuestController(q3, gc);
        QuestController qc4 = new QuestController(q4, gc);
        QuestController qc5 = new QuestController(q5, gc);
        QuestController qc6 = new QuestController(q6, gc);
        QuestController qc7 = new QuestController(q7, gc);
        QuestController qc8 = new QuestController(q8, gc);
        QuestController qc9 = new QuestController(q9, gc);
        QuestController qc10 = new QuestController(q10, gc);

        // CATEGORY CONTROLLERS
        MainPane mv = new MainPane();

        CategoryController ccMain = new CategoryController(new ArrayList<>(List.of(qc1, qc2, qc3)));
        CategoryController ccSecondary = new CategoryController(new ArrayList<>(List.of(qc4, qc5)));
        CategoryController ccContract = new CategoryController(new ArrayList<>(List.of(qc6, qc7, qc8)));
        CategoryController ccDLC = new CategoryController(new ArrayList<>(List.of(qc9, qc10)));

        mv.setColumns(ccMain.getCategoryPane(), ccSecondary.getCategoryPane(),
                           ccContract.getCategoryPane(), ccDLC.getCategoryPane());

        BorderPane root = new BorderPane();
        root.setTop(gc.getGeraldoPane());
        root.setCenter(mv);

        primaryStage.setTitle("Quest Log");
        primaryStage.setScene(new Scene(root, 1000, 400));
        primaryStage.show();
    }
}
