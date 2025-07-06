package com.company.view;

import com.company.control.BrawlerListController;
import com.company.control.MainController;
import com.company.model.brawlers.comparators.HealthPointsBrawlerComparator;
import javafx.scene.control.Button;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.VBox;

public class MainView extends BorderPane {
    public MainView(MainController mc) {
        Button orderByNameButton = new Button("Ordina per nome");
        orderByNameButton.setOnAction(_ -> mc.sort());
        Button orderByHealthPointsButton = new Button("Ordina per vita");
        orderByHealthPointsButton.setOnAction(_ -> mc.sort(new HealthPointsBrawlerComparator()));
        setLeft(new VBox(orderByNameButton, orderByHealthPointsButton));
    }
}
