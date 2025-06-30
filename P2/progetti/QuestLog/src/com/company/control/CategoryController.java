package com.company.control;

import com.company.model.quests.Quest;
import com.company.model.quests.comparators.NameComparator;
import com.company.model.quests.comparators.RewardComparator;
import com.company.view.CategoryPane;
import com.company.view.MainPane;
import com.company.view.QuestPane;

import java.util.ArrayList;
import java.util.List;

public class CategoryController {
    private List<QuestController> qcs;
    private CategoryPane cp;

    public CategoryController(List<QuestController> qcs) {
        this.qcs = qcs;
        this.cp = new CategoryPane(new ArrayList<>());
        display();
        cp.setNameButton(e -> sortByName());
        cp.setRewardButton(e -> sortByReward());
    }

    public CategoryPane getCategoryPane() {
        return cp;
    }

    private void sortByName() {
        qcs.sort(new NameComparator());
        display();
    }

    private void sortByReward() {
        qcs.sort(new RewardComparator());
        display();
    }

    private void display() {
        List<QuestPane> qps = new ArrayList<>();
        for (QuestController qc : qcs) {
            qps.add(qc.getQuestPane());
        }
        cp.setQuestPanes(qps);
    }
}