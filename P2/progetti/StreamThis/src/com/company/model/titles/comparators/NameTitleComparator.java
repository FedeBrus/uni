package com.company.model.titles.comparators;

import com.company.model.titles.Title;

import java.util.Comparator;

public class NameTitleComparator implements Comparator<Title> {
    @Override
    public int compare(Title o1, Title o2) {
        return o1.getName().compareTo(o2.getName());
    }
}
