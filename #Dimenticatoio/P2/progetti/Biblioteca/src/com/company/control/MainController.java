package com.company.control;

import com.company.model.PublicationList;
import com.company.model.publications.*;
import com.company.view.MainView;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

public class MainController {

    private MainView mv;
    private PublicationListController plc;
    private RentController rc;

    public MainController() {
        mv = new MainView(this);

        Publication p1 = new BookPublication("Moby Dick", "Melville", 1851, true, 720);
        Publication p2 = new MoviePublication("1984", "Orwell", 1984, true, 113);
        Publication p3 = new EbookPublication("Moby Dick", "Melville", 2016, true, 720, FileFormat.EPUB);
        Publication p4 = new BookPublication("1984", "Orwell", 1949, false, 328);
        Publication p5 = new BookPublication("Moby Dick", "Melville", 1851, false, 720);

        List<Publication> tmp = new ArrayList<>();
        tmp.add(p1);
        tmp.add(p2);
        tmp.add(p3);
        tmp.add(p4);
        tmp.add(p5);
        PublicationList pl = new PublicationList(tmp);
        plc = new PublicationListController(pl, this);
    }

    public void setPublicationListController(PublicationListController plc) {
        this.plc = plc;
        rc = new RentController(plc, this);
        mv.setCenter(plc.getView());
    }

    public MainView getView() {
        return mv;
    }

    public void sort() {
        plc.sort();
    }

    public void sort(Comparator<Publication> comparator) {
        plc.sort(comparator);
    }

    public void setRentController(RentController rc) {
        this.rc = rc;
        mv.drawBottom(rc.getView(), plc.isCurrentRented());
    }

    public void returnItem() {
        plc.returnItem();
    }
}
