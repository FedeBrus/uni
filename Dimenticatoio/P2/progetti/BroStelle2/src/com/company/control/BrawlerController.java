package com.company.control;

import com.company.model.CantLevelUpException;
import com.company.model.brawlers.Brawler;
import com.company.view.BrawlerPane;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.input.MouseEvent;

public class BrawlerController implements EventHandler<MouseEvent> {
    private Brawler brawler;
    private MainController mc;
    private BrawlerPane bp;

    public BrawlerController(Brawler brawler, MainController mc) {
        this.brawler = brawler;
        this.mc = mc;
        bp = new BrawlerPane(this);
    }

    public BrawlerPane getView() {
        return bp;
    }

    public Brawler getBrawler() {
        return brawler;
    }

    @Override
    public void handle(MouseEvent mouseEvent) {
        selectThisBrawler();
    }

    public void levelUp() throws CantLevelUpException {
        brawler.levelUp();
    }

    public void selectThisBrawler() {
        mc.selectBrawler(this);
    }
}
