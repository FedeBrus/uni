package com.company.model.brawler.comparator;

import com.company.model.brawler.Brawler;

import java.util.Comparator;

public class HealthComparator implements Comparator<Brawler> {
    @Override
    public int compare(Brawler o1, Brawler o2) {
        if (o1.getHealthPoints() > o2.getHealthPoints()) {
            return 1;
        } else if (o1.getHealthPoints() < o2.getHealthPoints()) {
            return -1;
        } else {
            return o1.compareTo(o2);
        }
    }
}
