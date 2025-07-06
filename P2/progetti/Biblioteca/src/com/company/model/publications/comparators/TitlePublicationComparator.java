package com.company.model.publications.comparators;

import com.company.model.publications.Publication;

import java.util.Comparator;

public class TitlePublicationComparator implements Comparator<Publication> {
    @Override
    public int compare(Publication o1, Publication o2) {
        int result = o1.getTitle().compareTo(o2.getTitle());
        if (result == 0) {
            result = o1.compareTo(o2);
        }
        return result;
    }
}
