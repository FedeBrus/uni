package com.company.model.titles;

import com.company.model.exceptions.CantGoLeftException;
import com.company.model.exceptions.CantGoRightException;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

public class TitleList {
    private List<Title> titles;
    private int index;

    public TitleList(List<Title> titles) {
        this.titles = titles;
        index = 0;
    }

    public void goLeft() throws CantGoLeftException {
        if (index > 0) {
            index--;
        } else {
            throw new CantGoLeftException();
        }
    }

    public void goRight() throws CantGoRightException {
        if (index < titles.size() - 3) {
            index++;
        } else {
            throw new CantGoRightException();
        }
    }

    public List<Title> getCurrentTitles() {
        List<Title> result = new ArrayList<>();
        for (int i = index; i < index + 3; i++) {
            result.add(titles.get(i));
        }
        return result;
    }

    public void sort(Comparator<Title> comparator) {
        titles.sort(comparator);
    }
}
