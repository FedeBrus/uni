package com.company.model.quests;

import com.company.model.quests.exceptions.QuestDependencyException;

public class MainQuest extends AbstractQuest {
    private final static int REWARD = 10;
    private final String place;
    private MainQuest nextQuest;
    private MainQuest prevQuest;

    public MainQuest(String name, int minLevel, String place) {
        super(name, minLevel, REWARD);
        this.place = place;
    }

    public void setNextQuest(MainQuest nextQuest) {
        this.nextQuest = nextQuest;
    }

    public void setPrevQuest(MainQuest prevQuest) {
        this.prevQuest = prevQuest;
    }

    @Override
    public void complete(int currentLevel) throws QuestDependencyException {
        if (prevQuest == null || prevQuest.isCompleted()) {
            super.complete(currentLevel);
        } else {
            throw new QuestDependencyException("Mission can't be completed");
        }
    }

    public String getPlace() {
        return place;
    }

    public MainQuest getNextQuest() {
        return nextQuest;
    }

    public MainQuest getPrevQuest() {
        return prevQuest;
    }

    @Override
    public String getInfo() {
        return super.getInfo() + "\n" +
                "Location: " + place + "\n" +
                "Req: " + ((prevQuest != null) ? prevQuest.getName() : "none");
    }
}
