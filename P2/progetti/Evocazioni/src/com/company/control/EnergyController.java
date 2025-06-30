package com.company.control;

import com.company.model.energies.Energy;
import com.company.view.EnergyPane;

public class EnergyController {
    private Energy energy;
    private EnergyPane ep;
    private PlayerController pc;

    public EnergyController(Energy energy, PlayerController pc) {
        this.energy = energy;
        ep = new EnergyPane(energy.getColor());
        ep.setHandler(e -> pc.applyEnergy(energy));
    }

    public EnergyPane getEnergyPane() {
        return ep;
    }

    public Energy getEnergy() {
        return energy;
    }
}
