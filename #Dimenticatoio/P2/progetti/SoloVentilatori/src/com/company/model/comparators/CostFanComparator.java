package com.company.model.comparators;

import com.company.model.Fan;

import java.util.Comparator;

public class CostFanComparator implements Comparator<Fan> {
    @Override
    public int compare(Fan o1, Fan o2) {
        Comparator<Fan> secondaryComparator = new MountFanComparator();
        int result = Integer.compare(o1.getCost(), o2.getCost());

        if (result == 0) {
            return secondaryComparator.compare(o1, o2);
        }

        return result;
    }
}
