package model;

import data.Block;
import data.NullBlock;
import data.SmeltableBlock;

public class Furnace {
    SmeltableBlock input;
    Block output;
    boolean readyToSmelt;

    public Furnace() {
        input = new NullBlock();
        output = new NullBlock();
        readyToSmelt = true;
    }

    public void displayOnOut() {
        System.out.println("|" + input.display() + " -> " + output.display() + "|");
    }

    public void smelt() {
        if (readyToSmelt) {
            output = input.smelt();
            input = new NullBlock();
            readyToSmelt = false;
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
        readyToSmelt = true;
        return res;
    }

    private boolean isReadyToSmelt() {
        return output instanceof NullBlock;
    }

    public Block getInput() {
        return input;
    }

    public Block getOutput() {
        return output;
    }
}
