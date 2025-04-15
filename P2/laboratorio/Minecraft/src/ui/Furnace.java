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
        if (isReadyToSmelt()) {
            output = input.smelt();
            input = new NullBlock();
        }
    }

    public void setInput(SmeltableBlock input) {
        this.input = input;
    }

    public Block retrieveInput() {
        Block res = input;
        input = new NullBlock();
        return res;
    }

    public Block retrieveOutput() {
        Block res = output;
        output = new NullBlock();
        return res;
    }

    private boolean isReadyToSmelt() {
        return !(input instanceof NullBlock) && output instanceof NullBlock;
    }
}
