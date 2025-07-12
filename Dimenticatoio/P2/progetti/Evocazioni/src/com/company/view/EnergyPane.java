package com.company.view;

import javafx.event.EventHandler;
import javafx.scene.input.MouseEvent;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;

public class EnergyPane extends Rectangle {
    public EnergyPane(Color color) {
        setWidth(70);
        setHeight(30);
        setFill(color);
    }

    public void setHandler(EventHandler<MouseEvent> handler) {
        addEventHandler(MouseEvent.MOUSE_CLICKED, handler);
    }
}
