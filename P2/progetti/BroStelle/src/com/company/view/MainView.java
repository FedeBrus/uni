package com.company.view;

import com.company.control.BrawlerController;
import com.company.control.TargetController;
import com.company.model.brawler.Brawler;
import com.company.model.brawler.comparator.HealthComparator;
import com.company.model.target.Target;
import javafx.geometry.Pos;
import javafx.scene.control.Button;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;

import java.util.Collections;
import java.util.List;

public class MainView extends BorderPane {
    private List<Brawler> brawlers;
    private HBox brawlersMenu;
    private SelectedBrawlerPane sbp;
    private VBox menuOrdinamenti;
    private TargetController tc;

    public MainView(List<Brawler> brawlers) {
        this.brawlers = brawlers;

        Target t = new Target();
        TargetPane tp = new TargetPane();
        tc = new TargetController(t, tp);
        setBottom(tp);

        sbp = new SelectedBrawlerPane();
        setCenter(sbp);

        drawTop();

        Button ordinaNome = new Button("Ordina per nome") ;
        Button ordinaVita = new Button("Ordina per vita") ;
        ordinaNome.setOnAction(e -> { Collections.sort(brawlers); drawTop(); });
        ordinaVita.setOnAction(e -> { brawlers.sort(new HealthComparator()); drawTop(); });
        menuOrdinamenti = new VBox(ordinaNome, ordinaVita);
        menuOrdinamenti.setAlignment(Pos.TOP_CENTER);
        setLeft(menuOrdinamenti);
   }

   private void drawTop() {
       brawlersMenu = new HBox();
       for (Brawler b : brawlers) {
           BrawlerController bc = new BrawlerController(b, sbp, tc);
           brawlersMenu.getChildren().add(bc.getBrawlerPane());
       }
       setTop(brawlersMenu);
   }
}
