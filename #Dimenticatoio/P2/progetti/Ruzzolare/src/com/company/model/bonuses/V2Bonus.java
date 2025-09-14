package com.company.model.bonuses;

import javafx.scene.paint.Color;

public class V2Bonus extends AbstractBonus {
    @Override
    public Color getColor() {
        return Color.RED;
    }

    @Override
    public int getMultiplier() {
        return 2;
    }

    public String getText() {
        return "*2";
    }
}
