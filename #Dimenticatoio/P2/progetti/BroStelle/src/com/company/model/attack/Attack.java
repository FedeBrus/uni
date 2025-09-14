package com.company.model.attack;

public interface Attack {
    int getDamage(int level);
    String getName();
    int getRange();
    Trajectory getTrajectory();
}
