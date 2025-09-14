package com.company.view;

import javafx.scene.text.Text;

public class WordPane extends Text {
    public WordPane() {
        reset();
    }

    public void addLetter(String letter) {
        setText(getText() + letter);
    }

    public void reset() {
        setText("Parola corrente: ");
    }
}
