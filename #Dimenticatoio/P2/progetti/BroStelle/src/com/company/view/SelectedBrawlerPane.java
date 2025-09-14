package com.company.view;

import com.company.control.AttackController;
import com.company.control.LevelUpController;
import com.company.model.brawler.Brawler;
import com.company.model.brawler.Speed;
import javafx.event.ActionEvent;
import javafx.event.Event;
import javafx.event.EventHandler;
import javafx.geometry.Pos;
import javafx.scene.control.Button;
import javafx.scene.input.MouseEvent;
import javafx.scene.layout.HBox;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Text;

public class SelectedBrawlerPane extends StackPane {
    private Button levelUpButton;
    private StackPane info;

    private final Text nameText;
    private final Text levelText;
    private final HBox nameLevel;

    private final Text hpText;
    private final Text speedText;
    private final HBox hpSpeed;

    private final Text attackText;
    private final Rectangle backGround;
    private VBox text;
    private Rectangle rectangle;

    private Circle hitArea;
    private HBox hb;

    public SelectedBrawlerPane() {
        levelUpButton = new Button("+");

        nameText = new Text();
        levelText = new Text();
        nameLevel = new HBox(nameText, levelText);
        nameLevel.setSpacing(10);
        nameLevel.setAlignment(Pos.CENTER);

        hpText = new Text();
        speedText = new Text();
        hpSpeed = new HBox(hpText, speedText);
        hpSpeed.setSpacing(10);
        hpSpeed.setAlignment(Pos.CENTER);

        attackText = new Text();
        text = new VBox(nameLevel, hpSpeed, attackText);
        text.setSpacing(10);
        text.setAlignment(Pos.CENTER);

        hitArea = new Circle();

        rectangle = new Rectangle(130, 90);
        info = new StackPane(rectangle, text);
        info.setAlignment(Pos.CENTER);

        backGround = new Rectangle(400, 400);
        backGround.setFill(Color.BLACK);
    }

    public void setName(String name) {
        nameText.setText(name);
    }

    public void setLevel(String level) {
        levelText.setText(level);
    }

    public void setHealthPoints(String hp) {
        hpText.setText(hp);
    }

    public void setSpeed(String s) {
        speedText.setText(s);
    }

    public void setAttack(String attackName, String attackDamage) {
        attackText.setText(attackName + ", " + attackDamage + " dmg");
    }

    public void setColor(Color color) {
        rectangle.setFill(color);
    }

    public void setLevelUpButton(LevelUpController lc) {
        levelUpButton = new Button("+");
        levelUpButton.setOnAction(lc);
        compose();
    }

    public void setAttackCircle(AttackController ac, int range) {
        hitArea = new Circle();
        hitArea.setFill(Color.GREEN);
        hitArea.setRadius(range);
        hitArea.setOnMouseClicked(ac);
        hitArea.setPickOnBounds(false);
        compose();
    }

    private void compose() {
        hb = new HBox(info, levelUpButton);
        text.addEventHandler(MouseEvent.MOUSE_CLICKED, me -> hitArea.fireEvent(me));
        hb.setSpacing(10);
        hb.setAlignment(Pos.CENTER);

        getChildren().clear();
        getChildren().addAll(backGround, hitArea, hb);
        setAlignment(Pos.CENTER);
    }
}
