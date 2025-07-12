package com.company.model.titles;

import javafx.scene.paint.Color;

public class AnimeTitle extends AbstractTitle {
    private Language subtitleLanguage;

    public AnimeTitle(String name, int year, Language language, double basePrice, Language subtitleLanguage) {
        super(name, year, language, basePrice);
        this.subtitleLanguage = subtitleLanguage;
    }

    @Override
    public Language getSubtitleLanguage() {
        return subtitleLanguage;
    }

    @Override
    public Color getColor() {
        return Color.SALMON;
    }

    @Override
    public int getValue() {
        return 1;
    }
}
