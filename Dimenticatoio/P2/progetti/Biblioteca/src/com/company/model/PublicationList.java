package com.company.model;

import com.company.model.publications.Publication;

import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class PublicationList {
    private List<Publication> publications;
    private int index;

    public PublicationList(List<Publication> publications) {
        this.publications = publications;
        index = 0;
    }

    public void goRight() {
        if (index < publications.size() - 1) {
            index++;
        }
    }

    public void goLeft() {
        if (index > 0) {
            index--;
        }
    }

    public Publication getCurrent() {
        return publications.get(index);
    }

    public boolean isAtLeftExtreme() {
        return index == 0;
    }

    public boolean isAtRightExtreme() {
        return index == publications.size() - 1;
    }

    public void sort(Comparator<Publication> comparator) {
        publications.sort(comparator);
    }

    public void sort() {
        Collections.sort(publications);
    }
}
