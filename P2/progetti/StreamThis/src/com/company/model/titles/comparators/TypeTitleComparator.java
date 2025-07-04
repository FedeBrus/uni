package com.company.model.titles.comparators;

import com.company.model.titles.Title;

import java.util.Comparator;

public class TypeTitleComparator implements Comparator<Title> {
    @Override
    public int compare(Title o1, Title o2) {
        int result = Integer.compare(o1.getValue(), o2.getValue());
        if (result == 0) {
            return new NameTitleComparator().compare(o1, o2);
        } else {
            return result;
        }
    }
}
