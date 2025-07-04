package com.company.view;

import com.company.control.MainController;
import javafx.scene.control.Button;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.StackPane;

public class MainView extends BorderPane {
    private MainController mc;

    public MainView(MainController mc) {
        this.mc = mc;
        Button clearButton = new Button("Clear");
        clearButton.setOnAction(_ -> setCenter(new StackPane()));
        setLeft(clearButton);


    }
}
