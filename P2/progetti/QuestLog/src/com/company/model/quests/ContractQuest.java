package com.company.model.quests;

import java.util.List;

public class ContractQuest extends AbstractQuest {
    private final List<String> monsters;

    public ContractQuest(String name, int minLevel, int reward, List<String> monsters) {
        super(name, minLevel, reward);
        this.monsters = monsters;
    }

    @Override
    public int getReward() {
        return super.getReward() * 120 / 100;
    }

    public List<String> getMonsters() {
        return monsters;
    }

    @Override
    public String getInfo() {
        return super.getInfo() + "Monsters: [" +
                String.join(", ", monsters) + "]";
    }
}
