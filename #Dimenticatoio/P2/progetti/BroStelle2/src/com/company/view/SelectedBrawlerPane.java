package com.company.view;

import com.company.control.AttackController;
import com.company.control.BrawlerController;
import com.company.model.CantLevelUpException;
import javafx.geometry.Pos;
import javafx.scene.control.Button;
import javafx.scene.layout.HBox;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Text;

public class SelectedBrawlerPane extends StackPane {
    public SelectedBrawlerPane(BrawlerController bc, AttackController ac) {
        Rectangle background = new Rectangle(300, 300);
        background.setFill(Color.BLACK);

        Circle hitArea = new Circle(bc.getBrawler().getAttack().getRange());
        hitArea.setFill(Color.GREEN);
        hitArea.setOnMouseClicked(ac);

        HBox hb = new HBox();

        Button levelUpButton = new Button("+");
        levelUpButton.setOnAction(_ -> {
            try {
                bc.levelUp();
                bc.selectThisBrawler();
            } catch (CantLevelUpException e) {
                System.out.println("NON PUOI LIVELLARE");
            }
        });

        StackPane info = new StackPane();

        Rectangle infoBackground = new Rectangle(130, 90);
        infoBackground.setFill(bc.getBrawler().getColor());

        VBox vbinfo = new VBox();
        vbinfo.setAlignment(Pos.CENTER);
        Text firstLine = new Text(bc.getBrawler().getName() + " " + bc.getBrawler().getLevel());
        Text secondLine = new Text(bc.getBrawler().getHealthPoints() + " " + bc.getBrawler().getSpeed().name());
        Text thirdLine = new Text(bc.getBrawler().getAttack().getName() + ", " + bc.getBrawler().getDamage() + "(dmg)");
        vbinfo.getChildren().addAll(firstLine, secondLine, thirdLine);
        vbinfo.setOnMouseClicked(e -> hitArea.fireEvent(e));
        info.getChildren().addAll(infoBackground, vbinfo);

        hb.setAlignment(Pos.CENTER);
        hb.setSpacing(5);
        hb.getChildren().addAll(info, levelUpButton);

        setAlignment(Pos.CENTER);
        getChildren().addAll(background, hitArea, hb);
    }
}
