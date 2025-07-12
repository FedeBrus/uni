package com.company.model.attacks;

public interface Attack {
    String getName();
    int getBaseDamage();
    int getRange();
    Trajectory getTrajectory();
}
