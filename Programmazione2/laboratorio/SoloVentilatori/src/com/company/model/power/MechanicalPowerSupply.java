package com.company.model.Power;

public class MechanicalPowerSupply implements PowerSupply {
    @Override
    public int getMultiplier() {
        return 1;
    }

    @Override
    public PowerSupplyType getType() {
        return PowerSupplyType.MECHANICAL;
    }
}
