package com.company.view;

import com.company.control.TitleListController;
import com.company.model.titles.comparators.NameTitleComparator;
import com.company.model.titles.comparators.TypeTitleComparator;
import com.company.model.titles.comparators.YearTitleComparator;
import javafx.geometry.Pos;
import javafx.scene.control.Button;
import javafx.scene.layout.VBox;
import javafx.scene.text.Text;

public class OrderPanel extends VBox {
    public OrderPanel(TitleListController tlc) {
        setAlignment(Pos.CENTER);
        setSpacing(10);
        Button nameOrderButton = new Button("Nome");
        Button yearOrderButton = new Button("Anno");
        Button typeOrderButton = new Button("Tipo");
        nameOrderButton.setOnAction(_ -> tlc.order(new NameTitleComparator()));
        yearOrderButton.setOnAction(_ -> tlc.order(new YearTitleComparator()));
        typeOrderButton.setOnAction(_ -> tlc.order(new TypeTitleComparator()));
        getChildren().addAll(new Text("Ordina per: "), nameOrderButton, yearOrderButton, typeOrderButton);
    }
}
