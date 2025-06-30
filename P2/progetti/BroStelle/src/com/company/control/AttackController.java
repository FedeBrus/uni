package com.company.control;

import com.company.model.brawler.Brawler;
import javafx.event.EventHandler;
import javafx.scene.input.MouseEvent;

public class AttackController implements EventHandler<MouseEvent> {

    private TargetController tc;
    private Brawler brawler;

    public AttackController(Brawler brawler, TargetController tc) {
        this.brawler = brawler;
        this.tc = tc;
    }

    @Override
    public void handle(MouseEvent mouseEvent) {
        tc.applyDamage(brawler.getAttack().getDamage(brawler.getLevel()));
    }
}
