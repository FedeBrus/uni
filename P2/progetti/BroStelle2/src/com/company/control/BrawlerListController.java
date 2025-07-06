package com.company.control;

import com.company.model.BrawlerList;
import com.company.model.brawlers.Brawler;
import com.company.model.brawlers.comparators.HealthPointsBrawlerComparator;
import com.company.view.BrawlerListPane;
import javafx.scene.Node;

import java.util.Comparator;

public class BrawlerListController {
    private BrawlerList bl;
    private MainController mc;
    private BrawlerListPane blp;

    public BrawlerListController(BrawlerList bl, MainController mc) {
        this.bl = bl;
        this.mc = mc;
        blp = new BrawlerListPane(this, mc);
        mc.setBrawlerList(this);
    }

    public BrawlerList getBrawlerList() {
        return bl;
    }

    public BrawlerListPane getView() {
        return blp;
    }

    public void sort() {
        bl.sort();
        blp = new BrawlerListPane(this, mc);
        mc.setBrawlerList(this);
    }

    public void sort(Comparator<Brawler> comparator) {
        bl.sort(comparator);
        blp = new BrawlerListPane(this, mc);
        mc.setBrawlerList(this);
    }
}
