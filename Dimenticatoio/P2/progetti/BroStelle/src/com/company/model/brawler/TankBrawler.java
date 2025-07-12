package com.company.model.brawler;

import com.company.model.attack.Attack;
import javafx.scene.paint.Color;

public class TankBrawler extends AbstractBrawler {
    public TankBrawler(String name, Attack attack) {
        super(name, attack);
    }

    @Override
    public int getMinHealthPoints() {
        return 8000;
    }

    @Override
    public int getMaxHealthPoints() {
        return 10500;
    }

    @Override
    public Speed getSpeed() {
        return Speed.SLOW;
    }

    @Override
    public Color getColor() {
        return Color.MAGENTA;
    }
}
