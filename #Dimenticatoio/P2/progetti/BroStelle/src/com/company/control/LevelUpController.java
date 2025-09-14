package com.company.control;

import com.company.model.brawler.Brawler;
import com.company.model.brawler.LevelUpException;
import com.company.view.MainView;
import com.company.view.SelectedBrawlerPane;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.control.Alert;

import java.util.logging.Level;

public class LevelUpController implements EventHandler<ActionEvent> {

    private Brawler brawler;
    private MainView mv;
    private TargetController tc;
    private SelectedBrawlerPane sbp;

    /*
    public LevelUpController(Brawler brawler, MainView mv, TargetController tc) {
        this.brawler = brawler;
        this.mv = mv;
        this.tc = tc;
    }
    */

    public LevelUpController(Brawler brawler, SelectedBrawlerPane sbp) {
        this.sbp = sbp;
        this.brawler = brawler;
    }

    @Override
    public void handle(ActionEvent actionEvent) {
        try {
            brawler.levelUp();
            sbp.setLevel(Integer.toString(brawler.getLevel()));
            sbp.setHealthPoints(Integer.toString(brawler.getHealthPoints()));
            sbp.setAttack(brawler.getAttack().getName(), Integer.toString(brawler.getAttack().getDamage(brawler.getLevel())));
            //mv.selectBrawler(brawler, tc);
        } catch (LevelUpException lue) {
            Alert alert = new Alert(Alert.AlertType.ERROR);
            alert.setContentText("The maximum level was reached");
            alert.showAndWait();
        }
    }
}
