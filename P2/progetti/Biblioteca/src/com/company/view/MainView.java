package com.company.view;

import com.company.control.MainController;
import com.company.model.publications.comparators.TitlePublicationComparator;
import com.company.model.publications.comparators.YearPublicationComparator;
import javafx.scene.control.Button;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;

public class MainView extends BorderPane {
    private Button returnButton;

    public MainView(MainController mc) {
        Button orderByYearButton = new Button("Per anno");
        Button orderByTitleButton = new Button("Per titolo");
        Button orderByIDButton = new Button("Per ID");
        orderByIDButton.setDisable(true);

        orderByYearButton.setOnAction(_ -> {
            mc.sort(new YearPublicationComparator());
            orderByYearButton.setDisable(true);
            orderByTitleButton.setDisable(false);
            orderByIDButton.setDisable(false);
        });

        orderByTitleButton.setOnAction(_ -> {
            mc.sort(new TitlePublicationComparator());
            orderByTitleButton.setDisable(true);
            orderByYearButton.setDisable(false);
            orderByIDButton.setDisable(false);
        });

        orderByIDButton.setOnAction(_ -> {
            mc.sort();
            orderByIDButton.setDisable(true);
            orderByTitleButton.setDisable(false);
            orderByYearButton.setDisable(false);
        });

        HBox orderButtons = new HBox();
        orderButtons.setSpacing(10);
        orderButtons.getChildren().addAll(orderByIDButton, orderByTitleButton, orderByYearButton);
        setTop(orderButtons);

        returnButton = new Button("Restituisci");
        returnButton.setOnAction(_ -> mc.returnItem());
    }

    public void drawBottom(RentPane rp, boolean returnButtonEnable) {
        returnButton.setDisable(!returnButtonEnable);
        VBox vb = new VBox();
        vb.setSpacing(10);
        vb.getChildren().addAll(rp, returnButton);
        setBottom(vb);
    }
}
