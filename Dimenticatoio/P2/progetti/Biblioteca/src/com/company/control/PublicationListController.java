package com.company.control;

import com.company.model.CantRentException;
import com.company.model.PublicationList;
import com.company.model.publications.Publication;
import com.company.view.PublicationListPane;
import javafx.scene.Node;

import java.util.Comparator;

public class PublicationListController {
    private PublicationList publications;
    private PublicationListPane plp;
    private MainController mc;

    public PublicationListController(PublicationList publications, MainController mc) {
        this.publications = publications;
        this.mc = mc;
        redraw();
    }

    public void redraw() {
        plp = new PublicationListPane(this);
        mc.setPublicationListController(this);
    }

    public Publication getCurrentPublication() {
        return publications.getCurrent();
    }

    public void goLeft() {
        publications.goLeft();
        redraw();
    }

    public void goRight() {
        publications.goRight();
        redraw();
    }

    public boolean isAtLeftExtreme() {
        return publications.isAtLeftExtreme();
    }

    public boolean isAtRightExtreme() {
        return publications.isAtRightExtreme();
    }

    public PublicationListPane getView() {
        return plp;
    }

    public void sort() {
        publications.sort();
        redraw();
    }

    public void sort(Comparator<Publication> comparator) {
        publications.sort(comparator);
        redraw();
    }

    public boolean isCurrentAvailable() {
        return (getCurrentPublication().isRentable() && !getCurrentPublication().isRented());
    }

    public void rent(int days) throws CantRentException {
        getCurrentPublication().rent(days);
        redraw();
    }

    public void returnItem() {
        getCurrentPublication().returnItem();
        redraw();
    }

    public boolean isCurrentRented() {
        return getCurrentPublication().isRented();
    }
}
