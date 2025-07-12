package com.company.model.quests.comparators;

import com.company.control.QuestController;
import java.util.Comparator;

public class NameComparator implements Comparator<QuestController> {
    @Override
    public int compare(QuestController o1, QuestController o2) {
        return o1.getQuest().getName().compareTo(o2.getQuest().getName());
    }
}
