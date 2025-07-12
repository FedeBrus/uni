package com.company.model.summons;

import com.company.model.energies.Attack;
import com.company.model.energies.Energy;

public class SummonBase extends AbstractSummon {
    public SummonBase(String name, int healthPoints, Energy energy, Attack attack) {
        super(name, healthPoints, energy, attack);
    }

    @Override
    public boolean isSupreme() {
        return false;
    }
}
