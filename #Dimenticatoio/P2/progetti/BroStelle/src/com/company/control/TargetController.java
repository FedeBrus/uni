package com.company.control;

import com.company.model.target.Target;
import com.company.model.target.TargetDeadException;
import com.company.view.TargetPane;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.control.Alert;

public class TargetController implements EventHandler<ActionEvent> {
    private final Target target;
    private final TargetPane tp;

    public TargetController(Target target, TargetPane tp) {
        this.target = target;
        this.tp = tp;
        reload();
    }

    private void reload() {
        tp.setReset(this);
        tp.setHp(target.getHealthPoints());
    }

    @Override
    public void handle(ActionEvent actionEvent) {
        target.resetHealthPoints();
        reload();
    }

    public void applyDamage(int damage) {
        try {
            target.applyDamage(damage);
            tp.setHp(target.getHealthPoints());
        } catch (TargetDeadException e) {
            tp.setHp(0);
            Alert alert = new Alert(Alert.AlertType.ERROR);
            alert.setContentText("The Target died");
            alert.showAndWait();
            target.resetHealthPoints();
            reload();
        }
    }
}
