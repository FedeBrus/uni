package com.company.model;

import com.company.model.bonuses.NullBonus;
import com.company.model.bonuses.V2Bonus;
import com.company.model.bonuses.V3Bonus;
import com.company.model.leaderboard.LeaderBoardEntry;
import com.company.model.letters.ALetter;
import com.company.model.letters.ELetter;
import com.company.model.letters.RLetter;

import java.util.Random;
import java.util.Set;
import java.util.SortedSet;
import java.util.TreeSet;

public class Game {
    public static final int SIZE = 4;
    private Word word;
    private Cell[][] cells;
    private int points;
    private SortedSet<LeaderBoardEntry> leaderboard;

    public Game(Set<String> acceptedWords) {
        leaderboard = new TreeSet<>();
        cells = new Cell[SIZE][SIZE];
        Random rnd = new Random();
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                switch (rnd.nextInt(3)) {
                    case 0:
                        cells[i][j] = new Cell(new ALetter(), new NullBonus());
                        break;
                    case 1:
                        cells[i][j] = new Cell(new ELetter(), new NullBonus());
                        break;
                    case 2:
                        cells[i][j] = new Cell(new RLetter(), new NullBonus());
                        break;
                }
            }
        }

        cells[0][0].setBonus(new V2Bonus());
        cells[0][SIZE - 1].setBonus(new V2Bonus());
        cells[SIZE - 1][0].setBonus(new V3Bonus());
        cells[SIZE - 1][SIZE - 1].setBonus(new V3Bonus());

        word = new Word(acceptedWords);
        points = 0;
    }

    public void addWordPoints() throws InvalidWordException {
        this.points += word.getScore();
    }

    public void activateAllCells() {
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                cells[i][j].activate();
    }

    public Cell[][] getCells() {
        return cells;
    }

    public int getPoints() {
        return points;
    }

    public void resetWord() {
        word.reset();
    }

    public void addLetter(Cell cell) {
        word.addLetter(cell);
    }

    public String getWord() {
        return word.getCurrentWord();
    }

    public void addLeaderBoardEntry(LeaderBoardEntry leaderBoardEntry) {
        leaderboard.add(leaderBoardEntry);
    }

    public Set<LeaderBoardEntry> getLeaderboard() {
        return leaderboard;
    }

    public void resetPoints() {
        points = 0;
    }
}
