package com.company.model.energies;

import javafx.scene.paint.Color;

public class WaterEnergy implements Energy {
    @Override
    public Color getColor() {
        return Color.AQUAMARINE;
    }

    @Override
    public boolean isStrong(EnergyType et) {
        return (et == EnergyType.FIRE);
    }

    @Override
    public EnergyType getType() {
        return EnergyType.WATER;
    }
}
