package com.company.model.brawlers;

import com.company.model.attacks.Attack;
import javafx.scene.paint.Color;

public abstract class AbstractLongRangeBrawler extends AbstractBrawler {
    public AbstractLongRangeBrawler(String name, int level, Attack attack) {
        super(name, level, attack);
    }

    @Override
    public Speed getSpeed() {
        return Speed.MEDIUM;
    }
}
