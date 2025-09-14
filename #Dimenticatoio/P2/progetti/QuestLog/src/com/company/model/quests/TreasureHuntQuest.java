package com.company.model.quests;

import java.util.List;

public class TreasureHuntQuest extends ContractQuest {
    private final String treasureLocation;

    public TreasureHuntQuest(String name, int minLevel, int reward, List<String> monsters, String treasureLocation) {
        super(name, minLevel, reward, monsters);
        this.treasureLocation = treasureLocation;
    }

    public String getTreasureLocation() {
        return treasureLocation;
    }

    @Override
    public String getInfo() {
        return super.getInfo() + "\n" +
                "Treasure Location: " + treasureLocation;
    }
}
