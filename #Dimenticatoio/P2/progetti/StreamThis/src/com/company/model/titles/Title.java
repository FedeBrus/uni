package com.company.model.titles;

import javafx.scene.paint.Color;

public interface Title {
    String getName();
    int getYear();
    Language getLanguage();
    Language getSubtitleLanguage();
    int getSeasons();
    void addSeason();
    double getBasePrice();
    double getEffectivePrice();
    Color getColor();
    void reset();
    int getValue();
}
