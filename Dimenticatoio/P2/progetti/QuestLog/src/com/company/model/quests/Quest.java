package com.company.model.quests;

import com.company.model.quests.exceptions.LowLevelException;
import com.company.model.quests.exceptions.QuestDependencyException;

public interface Quest {
    String getName();
    int getMinLevel();
    int getReward();
    int getLevelIncrement();
    boolean isCompleted();
    void complete(int currentLevel) throws LowLevelException, QuestDependencyException;
    String getInfo();
}
