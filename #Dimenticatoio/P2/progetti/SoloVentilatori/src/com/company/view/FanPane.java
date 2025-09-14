package com.company.view;

import com.company.model.mount.MountType;
import com.company.model.power.PowerSupplyType;
import javafx.event.EventHandler;
import javafx.scene.input.MouseEvent;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.scene.text.Text;

public class FanPane extends HBox {
    public FanPane(boolean taken, boolean affordable,
                   String brand, int cost,
                   PowerSupplyType ps, MountType mt, EventHandler<MouseEvent> handler) {

        Circle c = new Circle(25);
        c.setFill(taken ? Color.GRAY : Color.BLUE);
        c.setStrokeWidth(5);
        c.setStroke(affordable ? Color.BLACK : Color.RED);
        c.setOnMouseClicked(handler);

        VBox vb = new VBox();
        vb.getChildren().add(new Text(brand));
        vb.getChildren().add(new Text("Tipo: " + mt.name() + " Aliemntazione: " + ps.name()));
        vb.getChildren().add(new Text("Costo: " + cost));

        getChildren().addAll(c, vb);
    }
}
