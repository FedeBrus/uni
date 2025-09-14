package com.company.model.energies;

import javafx.scene.paint.Color;

public class NeutralEnergy implements Energy {
    @Override
    public Color getColor() {
        return Color.HONEYDEW;
    }

    @Override
    public boolean isStrong(EnergyType et) {
        return false;
    }

    @Override
    public EnergyType getType() {
        return EnergyType.NEUTRAL;
    }
}

