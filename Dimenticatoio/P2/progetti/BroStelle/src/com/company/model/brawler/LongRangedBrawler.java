package com.company.model.brawler;

import com.company.model.attack.Attack;

public abstract class LongRangedBrawler extends AbstractBrawler {
    public LongRangedBrawler(String name, Attack attack) {
        super(name, attack);
    }

    public Speed getSpeed() {
        return Speed.NORMAL;
    }
}
