package com.company.control;

import com.company.model.exceptions.CantGoLeftException;
import com.company.model.exceptions.CantGoRightException;
import com.company.model.titles.Title;
import com.company.model.titles.TitleList;
import com.company.model.titles.comparators.NameTitleComparator;
import com.company.view.OrderPanel;
import com.company.view.TitleListPane;

import java.util.Comparator;
import java.util.List;

public class TitleListController {
    private TitleList tl;
    private TitleListPane tlp;
    private MainController mc;

    public TitleListController(TitleList tl, MainController mc) {
        this.tl = tl;
        this.mc = mc;
        this.tlp = new TitleListPane(mc, this);
        mc.setTop(tlp);
        mc.setRight(new OrderPanel(this));
    }

    public List<Title> getCurrentTitles() {
        return tl.getCurrentTitles();
    }

    public void goLeft() {
        try {
            tl.goLeft();
            this.tlp = new TitleListPane(mc, this);
            mc.setTop(tlp);
        } catch (CantGoLeftException e) {
            System.out.println("non puoi andare a sinistra");
        }
    }

    public void goRight() {
        try {
            tl.goRight();
            this.tlp = new TitleListPane(mc, this);
            mc.setTop(tlp);
        } catch (CantGoRightException e) {
            System.out.println("non puoi andare a destra");
        }
    }

    public void order(Comparator<Title> comparator) {
        tl.sort(comparator);
        this.tlp = new TitleListPane(mc, this);
        mc.setTop(tlp);
    }
}
