package com.company.model.mount;

public class FloorMount implements Mount {
    @Override
    public int getAddedValue() {
        return 10;
    }

    @Override
    public MountType getType() {
        return MountType.FLOOR;
    }
}
