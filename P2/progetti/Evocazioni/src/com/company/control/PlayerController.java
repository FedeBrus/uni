package com.company.control;

import com.company.model.Player;
import com.company.model.SummonDeadException;
import com.company.model.WrongEnergyException;
import com.company.model.energies.Energy;
import com.company.model.summons.Summon;

import java.util.Iterator;
import java.util.List;

public class PlayerController {

    private Player p1;
    private Player p2;
    private List<SummonController> scs1;
    private List<SummonController> scs2;
    private List<EnergyController> ecs1;
    private List<EnergyController> ecs2;

    public PlayerController(Player p1, Player opponent,
                            List<SummonController> scs1, List<SummonController> scs2,
                            List<EnergyController> ecs1, List<EnergyController> ecs2) {
        this.p1 = p1;
        this.p2 = p2;
        this.scs1 = scs1;
        this.ecs1 = ecs1;
        this.scs2 = scs2;
        this.ecs2 = ecs2;
    }

    public void applyEnergy(Energy energy) {
        try {
            scs1.getFirst().applyEnergy(energy);
            removeEnergy(energy);
        } catch (WrongEnergyException e) {

        }
    }

    private void removeEnergy(Energy energy) {
        for (Iterator<EnergyController> ec = ecs1.iterator(); ec.hasNext();) {
            if (ec.next().getEnergy() == energy) {
                ec.remove();
                return;
            }
        }
    }

    public void attack(Summon summon) {
        int multiplier = (summon.getEnergy().isStrong(scs2.getFirst().getSummon().getEnergy().getType()) ? 2 : 1);
        try {
            scs2.getFirst().applyDamage(summon.getAttack().getDamage() * multiplier);
        } catch (SummonDeadException e) {
            scs2.getFirst().kill();
        }
    }
}
