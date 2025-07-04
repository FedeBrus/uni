package com.company.model.bonuses;

import javafx.scene.paint.Color;

public class NullBonus extends AbstractBonus {
    @Override
    public Color getColor() {
        return Color.BLACK;
    }

    @Override
    public int getMultiplier() {
        return 1;
    }

    public String getText() {
        return "";
    }
}
