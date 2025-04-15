package ui;

import data.Block;
import data.NullBlock;
import data.SmeltableBlock;
import java.util.List;
import java.util.ArrayList;

public class Inventory {
    private List<Block> blockList;

    public Inventory() {
        blockList = new ArrayList<Block>();
    }

    public void displayOnOut() {
        for (Block b : blockList) {
            b.displayInInventory();
        }
    }

    public void addBlock(Block b) {
        if (!(b instanceof NullBlock)) {
            blockList.add(b);
        }
    }

    public Block getBlock(int i) {
        Block res = new NullBlock();

        if (i >= 0 && i < blockList.size()) {
            res = blockList.remove(i);
        }

        return res;
    }

    private Block blockAt(int i) {
        Block res = new NullBlock();

        if (i >= 0 && i < blockList.size()) {
            res = blockList.get(i);
        }

        return res;
    }

    public boolean isSmeltable(int i) {
        return blockAt(i) instanceof SmeltableBlock;
    }

    public SmeltableBlock getSmeltableBlock(int i) {
        if (isSmeltable(i)) {
            return (SmeltableBlock)getBlock(i);
        }

        return new NullBlock();
    }
}
