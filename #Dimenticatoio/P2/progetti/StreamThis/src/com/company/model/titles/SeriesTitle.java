package com.company.model.titles;

import javafx.scene.paint.Color;

public class SeriesTitle extends AbstractTitle {
    private int seasonNumber;
    private int selectedSeasons;

    public SeriesTitle(String name, int year, Language language, double basePrice, int seasonNumber) {
        super(name, year, language, basePrice);
        this.seasonNumber = seasonNumber;
        selectedSeasons = 0;
    }

    @Override
    public int getSeasons() {
        return seasonNumber;
    }

    @Override
    public double getDiscount() {
        double discount = super.getDiscount();
        if (selectedSeasons > 0) {
            discount += 25.0 / 100;
        }
        if (selectedSeasons >= seasonNumber) {
            discount += 50.0 / 100;
        }
        return discount;
    }

    @Override
    public Color getColor() {
        return Color.MAGENTA;
    }

    @Override
    public void reset() {
        selectedSeasons = 0;
    }

    @Override
    public int getValue() {
        return 2;
    }

    @Override
    public void addSeason() {
        selectedSeasons++;
    }
}
