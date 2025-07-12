package com.company;


import com.company.control.MainController;
import com.company.control.TitleListController;
import com.company.model.titles.*;
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

        // TITLES
        Title t1 = new SeriesTitle("Boris", 2010, Language.ITALIAN, 10, 4);
        Title t2 = new AnimeTitle("Attack on Titan", 2013, Language.JAPANESE, 10, Language.ENGLISH);
        Title t3 = new MovieTitle("Parasite", 2019, Language.ENGLISH, 20);
        Title t4 = new AnimeTitle("Pokemon", 2010, Language.ENGLISH, 10, Language.NULL);
        Title t5 = new MovieTitle("The Irishman", 2019, Language.ENGLISH, 5);
        Title t6 = new SeriesTitle("1994", 2019, Language.ITALIAN, 10, 3);
        Title t7 = new MovieTitle("Her", 2013, Language.ENGLISH, 20);

        List<Title> tmp = new ArrayList<>();
        tmp.add(t1);
        tmp.add(t2);
        tmp.add(t3);
        tmp.add(t4);
        tmp.add(t5);
        tmp.add(t6);
        tmp.add(t7);

        TitleList tl = new TitleList(tmp);
        TitleListController tlc = new TitleListController(tl, mc);

        primaryStage.setTitle("Hello World");
        primaryStage.setScene(new Scene(mc.getView(), 400, 300));
        primaryStage.show();
    }
}
