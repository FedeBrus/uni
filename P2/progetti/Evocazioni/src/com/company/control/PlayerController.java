package com.company.control;

import com.company.model.GameOverException;
import com.company.view.EnergyMenu;
import com.company.view.EnergyPane;
import com.company.view.SummonMenu;
import com.company.view.SummonPane;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class PlayerController {
    private List<EnergyController> ecs;
    private List<SummonController> scs;
    private MainController mc;

    public PlayerController(List<EnergyController> ecs, List<SummonController> scs) {
        this.ecs = ecs;
        this.scs = scs;
    }

    public void setMainController(MainController mc) {
        this.mc = mc;
        this.mc.redraw();
    }

    public List<SummonController> getScs() {
        return scs;
    }

    public EnergyMenu getEnergyMenu() {
        List<EnergyPane> eps = new ArrayList<>();
        for (EnergyController i : ecs) {
            eps.add(i.getEnergyPane());
        }
        return new EnergyMenu(eps);
    }

    public void removeEnergy(EnergyController ec) {
        ecs.remove(ec);
        mc.setCurrentPlayerEnergies(getEnergyMenu());
    }

    public void applyEnergy(EnergyController ec) {
        mc.applyEnergy(this, ec);
    }

    public void applyAttack(SummonController summonController) throws GameOverException {
        mc.applyAttack(this, summonController);
    }

    public SummonMenu getSummonMenu() {
        List<SummonPane> sps = new ArrayList<>();
        scs = scs.stream().filter(x -> !x.getSummon().isDead()).collect(Collectors.toList());
        for (SummonController i : scs) {
            sps.add(i.getSummonPane());
        }

        return new SummonMenu(sps);
    }

    public void receiveAttack(SummonController sc) {
        if (sc.getSummon().isSupreme()) {
            for (SummonController i : scs) {
                i.receiveAttack(sc);
            }
        } else {
            scs.getFirst().receiveAttack(sc);
        }

        mc.setOpposingPlayerSummons(getSummonMenu());
    }

    public boolean noSummonsLeft() {
        return scs.isEmpty();
    }

    public void redraw() {
        mc.redraw();
    }
}
