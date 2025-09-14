package com.company.model.quests;

public class SecondaryQuest extends AbstractQuest {
    private final String npc;

    public SecondaryQuest(String name, int minLevel, int reward, String npc) {
        super(name, minLevel, reward);
        this.npc = npc;
    }

    @Override
    public int getLevelIncrement() {
        return 2;
    }

    public String getNPC() {
        return npc;
    }

    @Override
    public String getInfo() {
        return super.getInfo() + "\n" +
                "NPC: " + npc;
    }
}
