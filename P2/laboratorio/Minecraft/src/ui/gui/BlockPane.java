package ui.gui;

import data.Block;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Font;
import javafx.scene.text.FontWeight;
import javafx.scene.text.Text;

public class BlockPane extends StackPane {
    public static final int DIM_SQUARE = 50;
    private static final String FONT_NAME = "Verdana";
    private static final int FONT_SIZE = 24;
    private static final FontWeight FONT_WEIGHT = FontWeight.BOLD;
    private static final Color BLOCK_BORDER = Color.BLACK;
    private static final Color FONT_FILL = Color.WHITE;
    private static final Color FONT_BORDER = Color.BLACK;
    private Block block;

    public BlockPane(Block block) {
        this.block = block;
        initialize();
    }

    private void initialize() {
        Rectangle bg = new Rectangle(DIM_SQUARE, DIM_SQUARE, getBlockColor());
        bg.setStroke(BLOCK_BORDER);
        bg.setStrokeWidth(1);
        Font font = Font.font(FONT_NAME, FONT_WEIGHT, FONT_SIZE);
        Text text = new Text(Character.toString(block.display()));
        text.setFont(font);
        text.setFill(FONT_FILL);
        text.setStrokeWidth(1);
        text.setStroke(FONT_BORDER);
        getChildren().addAll(bg, text);
    }

    private Color getBlockColor() {
        return switch (block.blockId()) {
            case 0, 1 -> Color.WHITE;
            case 2 -> Color.BLUE;
            case 3 -> Color.YELLOW;
            case 4 -> Color.SILVER;
            case 5 -> Color.BEIGE;
            case 6 -> Color.GRAY;
            case 7 -> Color.ORANGE;
            default -> Color.WHITE;
        };
    }

    public void changeBlock(Block newBlock) {
        block = newBlock;
        initialize();
    }
}
