package com.company.model.publications;

public class BookPublication extends AbstractPublication {
    private int pages;

    public BookPublication(String title, String author, int year, boolean rentable, int pages) {
        super(title, author, year, rentable);
        this.pages = pages;
    }

    @Override
    public int getMaxDays() {
        return 30;
    }

    @Override
    public String getInfoAsString() {
        return "Book, " + pages + " pagine";
    }

    @Override
    public int getPages() {
        return pages;
    }
}
