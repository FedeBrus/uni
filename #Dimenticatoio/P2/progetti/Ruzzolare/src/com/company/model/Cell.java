package com.company.model;

import com.company.model.bonuses.Bonus;
import com.company.model.letters.Letter;

public class Cell {
    private Letter letter;
    private Bonus bonus;
    private boolean activated;

    public Cell(Letter letter, Bonus bonus) {
        this.letter = letter;
        this.bonus = bonus;
        this.activated = true;
    }

    public Letter getLetter() {
        return letter;
    }

    public Bonus getBonus() {
        return bonus;
    }

    public boolean isActivated() {
        return activated;
    }

    public void activate() {
        activated = true;
    }

    public void deactivate() {
        activated = false;
    }

    public void setBonus(Bonus bonus) {
        this.bonus = bonus;
    }
}
