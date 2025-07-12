package com.company.model.summons;

import com.company.model.WrongEnergyException;
import com.company.model.energies.Attack;
import com.company.model.energies.Energy;
import com.company.model.energies.EnergyType;

public interface Summon {
    String getName();
    int getTotalHealthPoints();
    int getHealthPoints();
    int getAppliedEnergiesNumber();
    Attack getAttack();
    boolean isSupreme();
    Energy getEnergy();
    void applyEnergy(Energy energy) throws WrongEnergyException;
    void receiveAttack(Summon attacker);
    boolean isReadyToAttack();
    boolean isDead();
}
