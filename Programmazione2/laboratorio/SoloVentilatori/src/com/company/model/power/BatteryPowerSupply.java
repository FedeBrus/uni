package com.company.model.Power;

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
