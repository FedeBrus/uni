package ui.gui;

import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.control.Button;
import javafx.scene.layout.VBox;

public class ButtonListPane extends VBox {
    public ButtonListPane() {
        super();
        Button doesNothing = new Button("does nothing");
        doesNothing.addEventHandler(ActionEvent.ACTION, new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
            }
        });

        getChildren().add(doesNothing);
    }
}
