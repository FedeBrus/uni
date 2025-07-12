package com.company.model.publications;

import com.company.model.CantRentException;

public abstract class AbstractPublication implements Publication {
    private static int numberOfItems = 0;
    private int id;
    private String title;
    private String author;
    private int year;
    private boolean rentable;
    private boolean rented;

    public AbstractPublication(String title, String author, int year, boolean rentable) {
        this.title = title;
        this.author = author;
        this.year = year;
        this.rentable = rentable;
        rented = false;
        id = ++numberOfItems;
    }

    @Override
    public int getID() {
        return id;
    }

    @Override
    public String getTitle() {
        return title;
    }

    @Override
    public String getAuthor() {
        return author;
    }

    @Override
    public int getYear() {
        return year;
    }

    @Override
    public boolean isRentable() {
        return rentable;
    }

    @Override
    public boolean isRented() {
        return rented;
    }

    @Override
    public FileFormat getFileFormat() {
        return FileFormat.NULL;
    }

    @Override
    public int getPages() {
        return 0;
    }

    @Override
    public int getDuration() {
        return 0;
    }

    @Override
    public int compareTo(Publication o) {
        return Integer.compare(id, o.getID());
    }

    @Override
    public void rent(int days) throws CantRentException {
        if (isRentable() && days <= getMaxDays()) {
            rented = true;
        } else {
            throw new CantRentException();
        }
    }

    @Override
    public void returnItem() {
        if (isRentable() && isRented()) {
            rented = false;
        }
    }
}
