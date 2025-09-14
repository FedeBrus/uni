package com.company.control;

import com.company.model.Geraldo;
import com.company.view.GeraldoPane;
import javafx.scene.Node;

public class GeraldoController {
    private final Geraldo geraldo;
    private final GeraldoPane gp;

    public GeraldoController(Geraldo geraldo) {
        this.geraldo = geraldo;
        this.gp = new GeraldoPane(geraldo.getLevel(), geraldo.getGoldPoints());
    }

    public int getLevel() {
        return geraldo.getLevel();
    }

    public void increaseLevel(int levelIncrement) {
        geraldo.increaseLevel(levelIncrement);
        updatePane();
    }

    public void increaseGoldPoints(int reward) {
        geraldo.increaseGoldPoints(reward);
        updatePane();
    }

    private void updatePane() {
        gp.setLabel(geraldo.getLevel(), geraldo.getGoldPoints());
    }

    public GeraldoPane getGeraldoPane() {
        return gp;
    }
}
