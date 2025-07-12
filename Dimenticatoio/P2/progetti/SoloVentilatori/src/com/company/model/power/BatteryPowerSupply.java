package com.company.model.power;

public class BatteryPowerSupply implements PowerSupply {
    @Override
    public int getMultiplier() {
        return 3;
    }

    @Override
    public PowerSupplyType getType() {
        return PowerSupplyType.BATTERY;
    }
}
