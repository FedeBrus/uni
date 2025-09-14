package com.company.control;

import com.company.model.brawler.Brawler;
import com.company.view.BrawlerPane;
import com.company.view.MainView;
import com.company.view.SelectedBrawlerPane;
import javafx.event.EventHandler;
import javafx.scene.input.MouseEvent;

public class BrawlerController implements EventHandler<MouseEvent> {
    private Brawler brawler;
    private SelectedBrawlerPane sbp;
    private TargetController tc;

    public BrawlerController(Brawler brawler, SelectedBrawlerPane sbp, TargetController tc) {
        this.brawler = brawler;
        this.sbp = sbp;
        this.tc = tc;
    }

    public BrawlerPane getBrawlerPane() {
        BrawlerPane bp = new BrawlerPane();
        bp.setColor(brawler.getColor());
        bp.setName(brawler.getName());
        bp.addEventHandler(MouseEvent.MOUSE_CLICKED, this);

        return bp;
    }

    @Override
    public void handle(MouseEvent mouseEvent) {
        sbp.setName(brawler.getName());
        sbp.setLevel(Integer.toString(brawler.getLevel()));
        sbp.setHealthPoints(Integer.toString(brawler.getHealthPoints()));
        sbp.setSpeed(brawler.getSpeed().toString());
        sbp.setAttack(brawler.getAttack().getName(), Integer.toString(brawler.getAttack().getDamage(brawler.getLevel())));
        sbp.setColor(brawler.getColor());
        sbp.setAttackCircle(new AttackController(brawler, tc), brawler.getAttack().getRange());
        sbp.setLevelUpButton(new LevelUpController(brawler, sbp));
    }
}
