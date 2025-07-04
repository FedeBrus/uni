package com.company.model.titles;

import javafx.scene.paint.Color;

public class MovieTitle extends AbstractTitle {
    public MovieTitle(String name, int year, Language language, double basePrice) {
        super(name, year, language, basePrice);
    }

    @Override
    public Color getColor() {
        return Color.CYAN;
    }

    @Override
    public int getValue() {
        return 0;
    }
}