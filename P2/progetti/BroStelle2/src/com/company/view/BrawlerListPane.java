package com.company.view;

import com.company.control.BrawlerController;
import com.company.control.BrawlerListController;
import com.company.control.MainController;
import com.company.model.brawlers.Brawler;
import javafx.scene.layout.HBox;

public class BrawlerListPane extends HBox {
    public BrawlerListPane(BrawlerListController blc, MainController mc) {
        for (Brawler b : blc.getBrawlerList().getBrawlers()) {
            getChildren().add(new BrawlerController(b, mc).getView());
        }
    }
}
