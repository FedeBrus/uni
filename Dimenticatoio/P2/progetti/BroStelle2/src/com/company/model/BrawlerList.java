package com.company.model;

import com.company.model.brawlers.Brawler;

import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class BrawlerList {
    private List<Brawler> brawlers;

    public BrawlerList(List<Brawler> brawlers) {
        this.brawlers = brawlers;
    }

    public List<Brawler> getBrawlers() {
        return brawlers;
    }

    public void sort() {
        Collections.sort(brawlers);
    }

    public void sort(Comparator<Brawler> comparator) {
        brawlers.sort(comparator);
    }
}
