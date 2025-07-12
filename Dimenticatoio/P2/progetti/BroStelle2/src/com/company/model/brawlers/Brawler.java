package com.company.model.brawlers;

import com.company.model.CantLevelUpException;
import com.company.model.attacks.Attack;
import javafx.scene.paint.Color;

public interface Brawler extends Comparable<Brawler> {
    String getName();
    int getLevel();
    void levelUp() throws CantLevelUpException;
    int getHealthPoints();
    int getDamage();
    Speed getSpeed();
    Attack getAttack();
    Color getColor();
}
