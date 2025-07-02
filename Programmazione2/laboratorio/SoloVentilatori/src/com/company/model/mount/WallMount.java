package com.company.model.Mount;

public class WallMount implements Mount {
    @Override
    public int getAddedValue() {
        return 20;
    }

    @Override
    public MountType getType() {
        return MountType.WALL;
    }
}
