package com.company.control;

import com.company.model.GameOverException;
import com.company.model.WrongEnergyException;
import com.company.view.EnergyMenu;
import com.company.view.SummonMenu;
import javafx.scene.layout.BorderPane;

public class MainController {

    private BorderPane mv;
    private PlayerController current;
    private PlayerController opposing;

    public MainController(PlayerController current, PlayerController opposing) {
        this.current = current;
        this.opposing = opposing;
        mv = new BorderPane();
        redraw();
    }

    public void redraw() {
        mv.setLeft(current.getEnergyMenu());
        mv.setBottom(current.getSummonMenu());
        mv.setRight(opposing.getEnergyMenu());
        mv.setTop(opposing.getSummonMenu());
    }

    private void swap() {
        PlayerController tmp = current;
        current = opposing;
        opposing = tmp;
        redraw();
    }

    public void applyEnergy(PlayerController pc, EnergyController ec) {
        if (pc == current) {
            try {
                pc.getScs().getFirst().applyEnergy(ec.getEnergy());
                pc.removeEnergy(ec);
            } catch (WrongEnergyException e) {
                System.out.println("ENERGIA SBAGLIATA");
            }
        } else {
            System.out.println("NON sono le tue energie");
        }
    }

    public void setCurrentPlayerEnergies(EnergyMenu energyMenu) {
        mv.setLeft(energyMenu);
    }

    public void setOpposingPlayerSummons(SummonMenu summonMenu) {
        mv.setTop(summonMenu);
    }

    public void applyAttack(PlayerController pc, SummonController sc) throws GameOverException {
        if (pc == current) {
            opposing.receiveAttack(sc);
        }

        if (opposing.noSummonsLeft()) {
            throw new GameOverException();
        }

        swap();
    }

    public BorderPane getMv() {
        return mv;
    }
}
