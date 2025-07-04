package com.company.model.leaderboard;

public class LeaderBoardEntry implements Comparable<LeaderBoardEntry> {
    private String name;
    private int points;

    public LeaderBoardEntry(String name, int points) {
        this.name = name;
        this.points = points;
    }

    @Override
    public int compareTo(LeaderBoardEntry o) {
        if (points != o.getPoints()) {
            return Integer.compare(points, o.getPoints());
        }

        return name.compareTo(o.getName());
    }

    public String getName() {
        return name;
    }

    public int getPoints() {
        return points;
    }
}
