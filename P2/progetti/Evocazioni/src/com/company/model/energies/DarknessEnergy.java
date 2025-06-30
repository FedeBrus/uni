package com.company.model.energies;

import javafx.scene.paint.Color;

public class DarknessEnergy implements Energy {
    @Override
    public Color getColor() {
        return Color.DARKVIOLET;
    }

    @Override
    public boolean isStrong(EnergyType et) {
        return true;
    }

    @Override
    public EnergyType getType() {
        return EnergyType.DARKNESS;
    }
}
