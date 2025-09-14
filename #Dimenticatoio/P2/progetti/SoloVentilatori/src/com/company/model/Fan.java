package com.company.model;

import com.company.model.mount.Mount;
import com.company.model.power.PowerSupply;

public class Fan {
    private static final int DEFAULT_COST = 10;
    private String brand;
    private int cost;
    private PowerSupply powerSupply;
    private Mount mount;

    public Fan(String brand, PowerSupply powerSupply, Mount mount) {
        this.brand = brand;
        this.powerSupply = powerSupply;
        this.mount = mount;
        cost = (DEFAULT_COST + mount.getAddedValue()) * powerSupply.getMultiplier();
    }

    public String getBrand() {
        return brand;
    }

    public int getCost() {
        return cost;
    }

    public Mount getMount() {
        return mount;
    }

    public PowerSupply getPowerSupply() {
        return powerSupply;
    }
}
