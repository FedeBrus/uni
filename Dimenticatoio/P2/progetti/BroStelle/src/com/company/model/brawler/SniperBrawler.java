package com.company.model.brawler;

import com.company.model.attack.Attack;
import javafx.scene.paint.Color;

public class SniperBrawler extends LongRangedBrawler {
    public SniperBrawler(String name, Attack attack) {
        super(name, attack);
    }

    public int getMinHealthPoints() {
        return 3000;
    }

    public int getMaxHealthPoints() {
        return 5500;
    }

    public Color getColor() {
        return Color.OLIVE;
    }
}
