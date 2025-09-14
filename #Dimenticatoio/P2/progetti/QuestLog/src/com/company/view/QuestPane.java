package com.company.view;

import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.Pos;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Text;
import javafx.scene.text.TextAlignment;

public class QuestPane extends VBox {
    private final Text text;
    private final Rectangle backGround;
    private Button completeButton;

    public QuestPane(String text) {
        this.text = new Text(text);
        this.text.setWrappingWidth(180);
        this.text.setTextAlignment(TextAlignment.CENTER);
        backGround = new Rectangle(240, 60); completeButton = new Button("Complete");
        setBackGroundColor(Color.BEIGE);
        setAlignment(Pos.TOP_CENTER);

        getChildren().addAll(new StackPane(backGround, this.text), completeButton);
    }

    private void setBackGroundColor(Color color) {
        backGround.setFill(color);
    }

    public void setCompleteButton(EventHandler<ActionEvent> handler) {
        completeButton = new Button("Complete");
        completeButton.setOnAction(handler);
        getChildren().clear();
        getChildren().addAll(new StackPane(backGround, text), completeButton);
    }

    public void setCompleted() {
        setBackGroundColor(Color.LIGHTGREEN);
        completeButton.setDisable(true);
    }
}
