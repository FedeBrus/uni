package ui;

import data.Block;
import data.NullBlock;
import data.SmeltableBlock;

public class Furnace {
    SmeltableBlock input;
    Block output;

    public Furnace() {
        input = new NullBlock();
        output = new NullBlock();
    }

    public void displayOnOut() {
        System.out.println("|" + input.display() + " -> " + output.display() + "|");
    }

    public void smelt() {
        output = input.smelt();
        input = new NullBlock();
    }

    public void setInput(SmeltableBlock input) {
        if (input != null) {
            this.input = input;
            output = input.smelt();
        }
    }
}
