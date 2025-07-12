package com.company.model.quests;

import com.company.model.quests.exceptions.QuestDependencyException;

public class DLCQuest extends MainQuest {

    public DLCQuest(String name, int minLevel, String place) {
        super(name, minLevel, place);
    }
}
