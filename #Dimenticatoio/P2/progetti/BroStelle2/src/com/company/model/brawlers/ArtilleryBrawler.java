package com.company.model.brawlers;

import com.company.model.attacks.Attack;
import javafx.scene.paint.Color;

public class ArtilleryBrawler extends AbstractLongRangeBrawler {
    public ArtilleryBrawler(String name, int level, Attack attack) {
        super(name, level, attack);
    }

    @Override
    protected int getMinHealthPoints() {
        return 2000;
    }

    @Override
    protected int getMaxHealthPoints() {
        return 3500;
    }

    @Override
    public Color getColor() {
        return Color.CYAN;
    }
}
