package com.company.model.publications;

import com.company.model.CantRentException;

public interface Publication extends Comparable<Publication> {
    int getID();
    String getTitle();
    String getAuthor();
    int getYear();
    boolean isRentable();
    boolean isRented();
    FileFormat getFileFormat();
    int getPages();
    int getDuration();
    int getMaxDays();
    String getInfoAsString();
    void rent(int days) throws CantRentException;
    void returnItem();
}
