package com.company.model.brawlers.comparators;

import com.company.model.brawlers.Brawler;

import java.util.Comparator;

public class HealthPointsBrawlerComparator implements Comparator<Brawler> {
    @Override
    public int compare(Brawler o1, Brawler o2) {
        int result = Integer.compare(o1.getHealthPoints(), o2.getHealthPoints());
        if (result == 0) {
            result = o1.compareTo(o2);
        }
        return result;
    }
}
