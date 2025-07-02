package com.company.control;

import com.company.model.GameOverException;
import com.company.model.energies.Attack;
import com.company.model.energies.Energy;
import com.company.model.summons.Summon;
import com.company.view.SummonPane;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;

public class SummonController {
    private Summon summon;
    private SummonPane sp;
    private PlayerController pc;

    public SummonController(Summon summon) {
        this.summon = summon;

        Border supremeBorder = new Border(new BorderStroke(Color.BLACK,
                BorderStrokeStyle.SOLID,
                new CornerRadii(0),
                new BorderWidths(10)));

        Border baseBorder = new Border(new BorderStroke(summon.getEnergy().getColor(),
                BorderStrokeStyle.SOLID,
                new CornerRadii(0),
                new BorderWidths(10)));

        sp = new SummonPane(summon.getEnergy().getColor(), (summon.isSupreme() ? supremeBorder : baseBorder));
        redraw();
    }

    public void setPlayerController(PlayerController pc) {
        this.pc = pc;
        this.pc.redraw();
    }

    public void applyEnergy(Energy energy) {
        summon.applyEnergy(energy);
        if (summon.isReadyToAttack()) {
            sp.setHandler(_ -> {
                try {
                    pc.applyAttack(this);
                } catch (GameOverException e) {
                    System.out.println("GAME OVER");
                }
            });
        }
        redraw();
    }

    private void redraw() {
        sp.setName(summon.getName());
        sp.setHealthPoints(summon.getHealthPoints() + "/" + summon.getTotalHealthPoints() + " PV");
        sp.setEnergies("Energies: " + summon.getAppliedEnergiesNumber());
        sp.setAttack(summon.getAttack().getName() + "(" + summon.getAttack().getRequiredEnergy() + ")");
        sp.setDamage(summon.getAttack().getDamage() + "dmg" + (summon.isSupreme() ? "(all)" : ""));
    }

    public Summon getSummon() {
        return summon;
    }

    public SummonPane getSummonPane() {
        redraw();
        return sp;
    }

    public void receiveAttack(SummonController sc) {
        summon.receiveAttack(sc.getSummon());
        redraw();
    }
}
