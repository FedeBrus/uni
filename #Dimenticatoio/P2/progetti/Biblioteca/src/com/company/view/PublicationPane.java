package com.company.view;

import com.company.model.publications.Publication;
import javafx.geometry.Pos;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Text;

public class PublicationPane extends HBox {
    public PublicationPane(Publication publication) {
        Rectangle r = new Rectangle(40, 40);
        String status;
        if (publication.isRentable()) {
            if (publication.isRented()) {
                r.setFill(Color.RED);
                status = "Non disponibile";
            } else {
                r.setFill(Color.GREEN);
                status = "Disponibile";
            }
        } else {
            r.setFill(Color.GRAY);
            status = "Non in prestito";
        }

        VBox info = new VBox();
        Text firstLine = new Text(publication.getID() + ". " + publication.getTitle());
        Text secondLine = new Text(publication.getYear() + ", " + publication.getAuthor());
        Text thirdLine = new Text(publication.getInfoAsString());
        Text fourthLine = new Text(status);
        info.setAlignment(Pos.CENTER);
        info.getChildren().addAll(firstLine, secondLine, thirdLine, fourthLine);

        setSpacing(10);
        setAlignment(Pos.CENTER);
        getChildren().addAll(r, info);
    }
}
