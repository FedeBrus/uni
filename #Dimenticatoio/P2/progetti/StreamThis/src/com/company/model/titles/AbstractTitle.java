package com.company.model.titles;

public abstract class AbstractTitle implements Title {
    private final static int THRESHOLD_YEAR = 2015;
    private final static double THRESHOLD_YEAR_DISCOUNT = 10.0 / 100;
    private String name;
    private int year;
    private Language language;
    private double basePrice;

    public AbstractTitle(String name, int year, Language language, double basePrice) {
        this.name = name;
        this.year = year;
        this.language = language;
        this.basePrice = basePrice;
    }

    public String getName() {
        return name;
    }

    public int getYear() {
        return year;
    }

    public Language getLanguage() {
        return language;
    }

    public double getBasePrice() {
        return basePrice;
    }

    @Override
    public Language getSubtitleLanguage() {
        return Language.NULL;
    }

    @Override
    public void addSeason() {}

    @Override
    public void reset() {}

    @Override
    public int getSeasons() {
        return 0;
    }

    public double getDiscount() {
        double discount = 0;
        if (year < THRESHOLD_YEAR) {
            discount += THRESHOLD_YEAR_DISCOUNT;
        }
        return discount;
    }

    public double getEffectivePrice() {
        return Math.round(basePrice * (1 - getDiscount()));
    }
}
