package com.company.model.brawlers;

import com.company.model.attacks.Attack;
import javafx.scene.paint.Color;

public class SniperBrawler extends AbstractLongRangeBrawler {
    public SniperBrawler(String name, int level, Attack attack) {
        super(name, level, attack);
    }

    @Override
    protected int getMinHealthPoints() {
        return 3000;
    }

    @Override
    protected int getMaxHealthPoints() {
        return 5500;
    }

    @Override
    public Color getColor() {
        return Color.OLIVE;
    }
}
