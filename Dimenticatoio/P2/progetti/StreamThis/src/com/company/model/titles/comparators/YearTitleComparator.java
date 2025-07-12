package com.company.model.titles.comparators;

import com.company.model.titles.Title;

import java.util.Comparator;

public class YearTitleComparator implements Comparator<Title> {
    @Override
    public int compare(Title o1, Title o2) {
        int result = Integer.compare(o1.getYear(), o2.getYear());
        if (result == 0) {
            return new NameTitleComparator().compare(o1, o2);
        } else {
            return result;
        }
    }
}
