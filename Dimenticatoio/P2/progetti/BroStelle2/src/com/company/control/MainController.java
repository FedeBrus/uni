package com.company.control;

import com.company.model.BrawlerList;
import com.company.model.Target;
import com.company.model.attacks.BlastAttack;
import com.company.model.attacks.LobberAttack;
import com.company.model.attacks.SingleAttack;
import com.company.model.brawlers.ArtilleryBrawler;
import com.company.model.brawlers.Brawler;
import com.company.model.brawlers.SniperBrawler;
import com.company.model.brawlers.TankBrawler;
import com.company.view.MainView;
import com.company.view.SelectedBrawlerPane;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

public class MainController {

    private BrawlerController selectedBrawler;
    private BrawlerListController blc;
    private TargetController tc;
    private MainView mv;

    public MainController() {
        mv = new MainView(this);
        Brawler b1 = new TankBrawler("Franco", 2, new BlastAttack("SBAM", 1000));
        Brawler b2 = new ArtilleryBrawler("Dinamichele", 8, new LobberAttack("Bomba", 2000));
        Brawler b3 = new SniperBrawler("Ape", 11, new SingleAttack("Bzz", 2000));
        Brawler b4 = new TankBrawler("Edoardo", 1, new SingleAttack("Sciarpa", 500));
        Brawler b5 = new SniperBrawler("Salice", 1, new LobberAttack("Tentacolo", 1200));

        List<Brawler> tmp = new ArrayList<>();
        tmp.add(b1);
        tmp.add(b2);
        tmp.add(b3);
        tmp.add(b4);
        tmp.add(b5);
        BrawlerList bl = new BrawlerList(tmp);

        BrawlerListController blc = new BrawlerListController(bl, this);
        TargetController tc = new TargetController(new Target(), this);
    }

    public void selectBrawler(BrawlerController bc) {
        selectedBrawler = bc;
        mv.setCenter(new SelectedBrawlerPane(selectedBrawler, new AttackController(selectedBrawler, tc)));
    }

    public MainView getView() {
        return mv;
    }

    public void setTarget(TargetController tc) {
        this.tc = tc;
        mv.setBottom(tc.getView());
    }

    public void setBrawlerList(BrawlerListController blc) {
        this.blc = blc;
        mv.setTop(blc.getView());
    }

    public void sort() {
        blc.sort();
    }

    public void sort(Comparator<Brawler> comparator) {
        blc.sort(comparator);
    }
}
