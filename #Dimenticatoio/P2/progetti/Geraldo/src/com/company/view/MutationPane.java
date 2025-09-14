package com.company.view;

import com.company.control.MutationController;
import com.company.model.mutations.Mutation;
import javafx.event.EventHandler;
import javafx.scene.input.MouseEvent;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Text;

public class MutationPane extends StackPane {
    private Text label;
    private String name;

    public MutationPane(Mutation mutation, EventHandler<MouseEvent> handler) {
        name = mutation.getName();
        label = new Text();
        setLabelPrefix("+");

        Rectangle r = new Rectangle(70, 70);
        r.setFill(mutation.getColor());
        r.setStrokeWidth(5);

        addEventHandler(MouseEvent.MOUSE_CLICKED, handler);
        getChildren().addAll(r, label);
    }

    public void setLabelPrefix(String prefix) {
        label.setText(prefix + " " + name);
    }
}
