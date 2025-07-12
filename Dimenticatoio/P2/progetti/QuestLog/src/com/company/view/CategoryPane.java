package com.company.view;

import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.Pos;
import javafx.scene.control.Button;
import javafx.scene.layout.VBox;

import java.util.List;

public class CategoryPane extends VBox {
    private List<QuestPane> qps;
    private final Button nameButton;
    private final Button rewardButton;

    public CategoryPane(List<QuestPane> qps) {
        this.qps = qps;
        nameButton = new Button("Order by Name");
        rewardButton = new Button("Order by Reward");
        setAlignment(Pos.TOP_CENTER);
        reload();
    }

    public void setNameButton(EventHandler<ActionEvent> handler) {
        nameButton.setOnAction(handler);
        reload();
    }

    public void setRewardButton(EventHandler<ActionEvent> handler) {
        rewardButton.setOnAction(handler);
        reload();
    }

    private void reload() {
        getChildren().clear();
        getChildren().addAll(qps);
        getChildren().addAll(nameButton, rewardButton);
    }

    public void setQuestPanes(List<QuestPane> qps) {
        this.qps = qps;
        reload();
    }
}
