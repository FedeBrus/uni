package com.company.model.brawlers;

import com.company.model.attacks.Attack;
import javafx.scene.paint.Color;

public class TankBrawler extends AbstractBrawler {
    public TankBrawler(String name, int level, Attack attack) {
        super(name, level, attack);
    }

    @Override
    public Speed getSpeed() {
        return Speed.SLOW;
    }

    @Override
    public Color getColor() {
        return Color.MAGENTA;
    }

    @Override
    protected int getMinHealthPoints() {
        return 8000;
    }

    @Override
    protected int getMaxHealthPoints() {
        return 10500;
    }
}
