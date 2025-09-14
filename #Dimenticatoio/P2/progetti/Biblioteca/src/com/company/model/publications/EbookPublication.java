package com.company.model.publications;

public class EbookPublication extends BookPublication {
    private FileFormat fileFormat;

    public EbookPublication(String title, String author, int year, boolean rentable, int pages, FileFormat fileFormat) {
        super(title, author, year, rentable, pages);
        this.fileFormat = fileFormat;
    }

    @Override
    public int getMaxDays() {
        return 20;
    }

    @Override
    public FileFormat getFileFormat() {
        return fileFormat;
    }

    @Override
    public String getInfoAsString() {
        return "EBook, " + fileFormat.toString() + " " + super.getPages() + " pagine";
    }
}
