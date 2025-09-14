package com.company.model.energies;

import javafx.scene.paint.Color;

public interface Energy {
    Color getColor();
    boolean isStrong(EnergyType et);
    EnergyType getType();
}
