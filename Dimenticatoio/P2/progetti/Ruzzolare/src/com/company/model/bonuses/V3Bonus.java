package com.company.model.bonuses;

import javafx.scene.paint.Color;

public class V3Bonus extends AbstractBonus {
    @Override
    public Color getColor() {
        return Color.BLUE;
    }

    @Override
    public int getMultiplier() {
        return 3;
    }

    public String getText() {
        return "*3";
    }
}
