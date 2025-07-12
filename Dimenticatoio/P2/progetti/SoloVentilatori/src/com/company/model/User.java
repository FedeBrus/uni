package com.company.model;

import java.util.ArrayList;
import java.util.List;

public class User {
    private int budget;
    private int months;
    private List<Fan> fans;

    public User() {
        budget = 100;
        months = 0;
        fans = new ArrayList<>();
    }

    public int getBudget() {
        return budget;
    }

    public int getMonths() {
        return months;
    }

    public List<Fan> getFans() {
        return fans;
    }

    public void increaseBudget(int increase) {
        this.budget += increase;
    }

    public void nextMonth(int monthlySpending) {
        budget -= monthlySpending;
        months++;
    }
}
