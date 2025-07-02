package com.company.model.comparators;

import com.company.model.Fan;

import java.util.Comparator;

public class MountFanComparator implements Comparator<Fan> {
    @Override
    public int compare(Fan o1, Fan o2) {
        Comparator<Fan> secondaryComparator = new CostFanComparator();
        int result = Integer.compare(o1.getMount().getType().ordinal(), o2.getMount().getType().ordinal());

        if (result == 0) {
            return secondaryComparator.compare(o1, o2);
        }

        return result;
    }
}
