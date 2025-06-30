package com.company.model.brawler;

import com.company.model.attack.Attack;
import javafx.scene.paint.Color;

public class ArtilleryBrawler extends LongRangedBrawler {
    public ArtilleryBrawler(String name, Attack attack) {
        super(name, attack);
    }

    public int getMinHealthPoints() {
        return 2000;
    }

    public int getMaxHealthPoints() {
        return 3500;
    }

    public Color getColor() {
        return Color.CYAN;
    }
}
