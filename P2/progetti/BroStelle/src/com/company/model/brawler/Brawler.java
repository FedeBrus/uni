package com.company.model.brawler;

import com.company.model.attack.Attack;
import javafx.scene.paint.Color;

public interface Brawler extends Comparable<Brawler> {
    String getName();
    int getHealthPoints();
    int getLevel();
    Speed getSpeed();
    Color getColor();
    void levelUp() throws LevelUpException;
    Attack getAttack();
}
