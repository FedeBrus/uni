package com.company.view;

import javafx.event.EventHandler;
import javafx.geometry.Pos;
import javafx.scene.input.MouseEvent;
import javafx.scene.layout.Border;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Text;

public class SummonPane extends StackPane {
    private Text nameLabel;
    private Text healthPointsLabel;
    private Text energiesLabel;
    private Text attackLabel;
    private Text damageLabel;

    public SummonPane(Color color, Border border) {
        nameLabel = new Text();
        healthPointsLabel = new Text();
        energiesLabel = new Text();
        attackLabel = new Text();
        damageLabel = new Text();

        VBox vb = new VBox();
        vb.getChildren().addAll(nameLabel, healthPointsLabel, energiesLabel, attackLabel, damageLabel);
        vb.setAlignment(Pos.CENTER_LEFT);

        Rectangle r = new Rectangle(100, 100);
        r.setFill(color);
        setBorder(border);
        getChildren().addAll(r, vb);
    }

    public void setName(String name) {
        nameLabel.setText(name);
    }

    public void setHealthPoints(String healthPoints) {
        healthPointsLabel.setText(healthPoints);
    }

    public void setEnergies(String energies) {
        energiesLabel.setText(energies);
    }

    public void setAttack(String attack) {
        attackLabel.setText(attack);
    }

    public void setDamage(String damage) {
        damageLabel.setText(damage);
    }

    public void setHandler(EventHandler<MouseEvent> handler) {
        addEventHandler(MouseEvent.MOUSE_CLICKED, handler);
    }
}
