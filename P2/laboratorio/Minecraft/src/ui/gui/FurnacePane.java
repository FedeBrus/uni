package ui.gui;

import data.NullBlock;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Text;

public class FurnacePane extends VBox {
  private BlockPane input;
  private BlockPane output;

  public FurnacePane() {
    super();
    Text label = new Text("Furnace: ");
    Text arrow = new Text("-->");
    StackPane labelPane = new StackPane();
    labelPane.getChildren().add(new Rectangle(50, 50, Color.WHITE));
    labelPane.getChildren().add(label);
    StackPane arrowPane = new StackPane();
    arrowPane.getChildren().add(new Rectangle(50, 50, Color.WHITE));
    arrowPane.getChildren().add(arrow);
    input = new BlockPane(new NullBlock());
    output = new BlockPane(new NullBlock());
    getChildren().addAll(labelPane, input, arrow, output);
  }
}
