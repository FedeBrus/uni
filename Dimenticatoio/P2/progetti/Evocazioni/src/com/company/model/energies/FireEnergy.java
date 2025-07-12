package com.company.model.energies;

import javafx.scene.paint.Color;

public class FireEnergy implements Energy {
    @Override
    public Color getColor() {
        return Color.FIREBRICK;
    }

    @Override
    public boolean isStrong(EnergyType et) {
        return (et == EnergyType.WATER);
    }

    @Override
    public EnergyType getType() {
        return EnergyType.FIRE;
    }
}
