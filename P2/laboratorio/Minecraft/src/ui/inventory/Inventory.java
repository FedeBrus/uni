package ui.inventory;

import data.Block;
import data.NullBlock;
import data.SmeltableBlock;

import java.util.Comparator;
import java.util.List;
import java.util.ArrayList;

public class Inventory {
    private List<Block> blockList;
    private Comparator<Block> comparator;

    public Inventory() {
        blockList = new ArrayList<Block>();
        comparator = new BlockComparator();
    }

    public void displayOnOut() {
        for (Block b : blockList) {
            b.displayInInventory();
        }
    }

    public void addBlock(Block b) {
        if (!(b instanceof NullBlock)) {
            blockList.add(b);
            blockList.sort(comparator);
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

    public void toggleComaprator() {
        if (comparator instanceof AlphabeticalBlockComparator) {
            comparator = new BlockComparator();
        } else {
            comparator = new AlphabeticalBlockComparator();
        }
    }
}
