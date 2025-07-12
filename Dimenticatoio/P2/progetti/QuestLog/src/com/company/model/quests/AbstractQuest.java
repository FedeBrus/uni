package com.company.model.quests;

import com.company.model.quests.exceptions.QuestDependencyException;
import com.company.model.quests.exceptions.LowLevelException;

public abstract class AbstractQuest implements Quest {
    private final String name;
    private final int minLevel;
    private final int reward;
    private boolean completed;

    public AbstractQuest(String name, int minLevel, int reward) {
        this.name = name;
        this.minLevel = minLevel;
        this.reward = reward;
        completed = false;
    }

    @Override
    public String getName() {
        return name;
    }

    @Override
    public int getMinLevel() {
        return minLevel;
    }

    @Override
    public int getReward() {
        return reward;
    }

    @Override
    public int getLevelIncrement() {
        return 1;
    }

    @Override
    public boolean isCompleted() {
        return completed;
    }

    @Override
    public void complete(int currentLevel) throws QuestDependencyException, LowLevelException {
        if (currentLevel >= minLevel) {
            completed = true;
        } else {
            throw new LowLevelException("Level is too low");
        }
    }

    @Override
    public String getInfo() {
        return name + " (" + reward + ")";
    }
}
