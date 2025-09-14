package com.company.model.publications;

public class MoviePublication extends AbstractPublication {
    private int duration;

    public MoviePublication(String title, String author, int year, boolean rentable, int duration) {
        super(title, author, year, rentable);
        this.duration = duration;
    }

    @Override
    public int getMaxDays() {
        return 5;
    }

    @Override
    public String getInfoAsString() {
        return "Movie, " + duration + " minuti";
    }
}
