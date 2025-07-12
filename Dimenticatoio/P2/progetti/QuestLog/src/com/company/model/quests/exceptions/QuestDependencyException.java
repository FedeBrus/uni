package com.company.model.quests.exceptions;

public class QuestDependencyException extends RuntimeException {
    public QuestDependencyException(String message) {
        super(message);
    }
}
