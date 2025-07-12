package com.company.model.power;

public class OutletPowerSupply implements PowerSupply {
    @Override
    public int getMultiplier() {
        return 2;
    }

    @Override
    public PowerSupplyType getType() {
        return PowerSupplyType.OUTLET;
    }
}
