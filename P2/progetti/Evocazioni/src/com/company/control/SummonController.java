package com.company.control;

import com.company.model.energies.Energy;
import com.company.model.summons.Summon;
import com.company.view.SummonPane;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;

public class SummonController {
    private Summon summon;
    private SummonPane sp;
    private PlayerController pc;

    public SummonController(Summon summon, PlayerController pc) {
        this.summon = summon;
        this.pc = pc;

        Border supremeBorder = new Border(new BorderStroke(Color.BLACK,
                BorderStrokeStyle.SOLID,
                new CornerRadii(0),
                new BorderWidths(10)));

        Border baseBorder = new Border(new BorderStroke(Color.BLACK,
                BorderStrokeStyle.SOLID,
                new CornerRadii(0),
                new BorderWidths(0)));

        sp = new SummonPane(summon.getEnergy().getColor(), (summon.isSupreme() ? supremeBorder : baseBorder));
        sp.setHandler(e -> {
            if (summon.getAppliedEnergiesNumber() >= summon.getAttack().getRequiredEnergy()) {
                pc.attack(summon);
            }
        })
    }

    public void applyEnergy(Energy energy) {
        summon.applyEnergy(energy);
        redraw();
    }

    private void redraw() {
        sp.setName(summon.getName());
        sp.setHealthPoints(summon.getHealthPoints() + "/" + summon.getTotalHealthPoints() + " PV");
        sp.setEnergies("Energies: " + summon.getAppliedEnergiesNumber());
        sp.setAttack(summon.getAttack().getName() + "(" + summon.getAttack().getRequiredEnergy() + ")");
    }

    public void applyDamage(int damage) {
        summon.applyDamage(damage);
    }

    public Summon getSummon() {
        return summon;
    }

    public void kill() {

    }
}
