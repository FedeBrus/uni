package com.company.model.publications.comparators;

import com.company.model.publications.Publication;

import java.util.Comparator;

public class YearPublicationComparator implements Comparator<Publication> {
    @Override
    public int compare(Publication o1, Publication o2) {
        int result = Integer.compare(o1.getYear(), o2.getYear());
        if (result == 0) {
            result = o1.compareTo(o2);
        }
        return result;
    }
}
