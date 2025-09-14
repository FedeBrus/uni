package com.company.model.quests.comparators;

import com.company.control.QuestController;

import java.util.Comparator;

public class RewardComparator implements Comparator<QuestController> {
    @Override
    public int compare(QuestController o1, QuestController o2) {
        return Integer.compare(o1.getQuest().getReward(), o2.getQuest().getReward());
    }
}
