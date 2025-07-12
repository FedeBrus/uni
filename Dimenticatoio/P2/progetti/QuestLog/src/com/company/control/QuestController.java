package com.company.control;

import com.company.model.Geraldo;
import com.company.model.quests.exceptions.LowLevelException;
import com.company.model.quests.exceptions.QuestDependencyException;
import com.company.model.quests.Quest;
import com.company.view.QuestPane;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.control.Alert;

public class QuestController implements EventHandler<ActionEvent> {
    private final Quest quest;
    private final QuestPane qp;
    private final GeraldoController gc;

    public QuestController(Quest quest, GeraldoController gc) {
        this.quest = quest;
        this.qp = new QuestPane(quest.getInfo());
        this.gc = gc;

        this.qp.setCompleteButton(this);
    }

    @Override
    public void handle(ActionEvent actionEvent) {
        try {
            quest.complete(gc.getLevel());
            gc.increaseLevel(quest.getLevelIncrement());
            gc.increaseGoldPoints(quest.getReward());
            qp.setCompleted();
        } catch (QuestDependencyException e) {
            alert("This mission is currently unavailable");
        } catch (LowLevelException e) {
            alert("Your level is too low");
        }
    }

    private void alert(String message) {
        Alert alert = new Alert(Alert.AlertType.ERROR);
        alert.setContentText(message);
        alert.showAndWait();
    }

    public QuestPane getQuestPane() {
        return qp;
    }

    public Quest getQuest() {
        return quest;
    }
}
