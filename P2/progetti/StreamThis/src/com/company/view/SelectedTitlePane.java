package com.company.view;

import com.company.control.TitleController;
import javafx.geometry.Pos;
import javafx.scene.Node;
import javafx.scene.control.Button;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.text.Text;

public class SelectedTitlePane extends VBox {
    public SelectedTitlePane(TitleController tc) {
        setAlignment(Pos.CENTER);
        Text titleText = new Text("Titlo: " + tc.getTitle().getName());
        Text yearText = new Text("Anno: " + tc.getTitle().getYear());
        Text languageText = new Text("Lingua: " + tc.getTitle().getLanguage().name());
        Text priceText = new Text("Prezzo base: " + tc.getTitle().getBasePrice() + "€");
        Button purchaseButton = new Button("Acquista: " + tc.getTitle().getEffectivePrice());
        HBox seasonButtons = new HBox();
        seasonButtons.setAlignment(Pos.CENTER);
        for (int i = 0; i < tc.getTitle().getSeasons(); i++) {
            Button seasonButton = new Button("S" + i);
            seasonButton.setOnAction(_ -> {
                tc.addSeason();
                seasonButton.setDisable(true);
                purchaseButton.setText("Acquista: " + tc.getTitle().getEffectivePrice());
            });
            seasonButtons.getChildren().add(seasonButton);
        }

        purchaseButton.setOnAction(_ -> {
            System.out.println("errore connessione");
        });

        getChildren().addAll(titleText, yearText, languageText, priceText, seasonButtons, purchaseButton);
    }
}
