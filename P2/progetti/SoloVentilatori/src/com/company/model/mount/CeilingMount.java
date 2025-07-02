package com.company.model.mount;

public class CeilingMount implements Mount {
    @Override
    public int getAddedValue() {
        return 2;
    }

    @Override
    public MountType getType() {
        return MountType.CEILING;
    }
}
