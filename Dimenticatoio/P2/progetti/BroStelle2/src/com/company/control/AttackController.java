package com.company.control;

import com.company.model.TargetDeadException;
import javafx.event.EventHandler;
import javafx.scene.input.MouseEvent;

public class AttackController implements EventHandler<MouseEvent> {
    private BrawlerController bc;
    private TargetController tc;

    public AttackController(BrawlerController bc, TargetController tc) {
        this.bc = bc;
        this.tc = tc;
    }

    @Override
    public void handle(MouseEvent mouseEvent) {
        try {
            tc.getTarget().applyDamage(bc.getBrawler().getDamage());
        } catch (TargetDeadException e) {
            System.out.println("TARGET MORTO");
        } finally {
            tc.update();
        }
    }
}
