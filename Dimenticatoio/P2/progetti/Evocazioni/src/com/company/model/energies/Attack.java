package com.company.model.energies;

public class Attack {
    private String name;
    private int requiredEnergy;
    private int damage;

    public Attack(String name, int requiredEnergy, int damage) {
        this.name = name;
        this.requiredEnergy = requiredEnergy;
        this.damage = damage;
    }

    public String getName() {
        return name;
    }

    public int getRequiredEnergy() {
        return requiredEnergy;
    }

    public int getDamage() {
        return damage;
    }
}
