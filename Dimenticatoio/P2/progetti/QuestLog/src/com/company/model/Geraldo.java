package com.company.model;

public class Geraldo {

    private int level;
    private int goldPoints;

    public Geraldo() {
        level = 2;
        goldPoints = 0;
    }

    public void increaseLevel(int increase) {
        level += increase;
    }

    public void increaseGoldPoints(int increase) {
        goldPoints += increase;
    }

    public int getLevel() {
        return level;
    }

    public int getGoldPoints() {
        return goldPoints;
    }
}
