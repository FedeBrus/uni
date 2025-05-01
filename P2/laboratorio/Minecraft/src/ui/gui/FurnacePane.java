package ui.gui;

import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Text;

public class FurnacePane extends VBox {
    // Create FurnacePane che estende VBox, con due campi:
    // input e output che sono BlockPane.
    // Aggiungete del testo che dica "Furnace", poi l'input,
    // poi del testo che dica "-->", poi l'output.

    // Testate che visualizzi correttamente i blocchi.
    private BlockPane input;
    private BlockPane output;

    public FurnacePane() {
        super();
        Text label = new Text("Furnace: ");
        Text arrow = new Text("-->");
        StackPane labelPane = new StackPane();
        labelPane.getChildren().add(new Rectangle(50, 50, Color.WHITE));
        labelPane.getChildren().add(label);
        getChildren().addAll(labelPane, input, arrow, output);
    }
}
