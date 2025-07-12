package com.company.model;

import java.util.ArrayList;
import java.util.List;
import java.util.Set;

public class Word {
    private List<Cell> letters;
    private Set<String> acceptedWords;

    public Word(Set<String> acceptedWords) {
        letters = new ArrayList<>();
        this.acceptedWords = acceptedWords;
    }

    public String getCurrentWord() {
        String result = "";
        for (Cell i : letters) {
            result = result.concat(i.getLetter().getText());
        }
        return result;
    }

    private boolean isValidWord() {
        return acceptedWords.contains(getCurrentWord());
    }

    public int getScore() throws InvalidWordException {
        if (isValidWord()) {
            int score = 0;
            for (Cell i : letters) {
                score += i.getLetter().getValue() * i.getBonus().getMultiplier();
            }
            return score;
        } else {
            throw new InvalidWordException();
        }
    }

    public void addLetter(Cell cell) {
        letters.add(cell);
    }

    public void reset() {
        letters.clear();
    }
}
