package model.inventory;

import data.*;
import model.inventory.comparators.AlphabeticalBlockComparator;
import model.inventory.comparators.BlockComparator;

import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import java.util.ArrayList;

public class Inventory {
    private List<Block> blockList;
    private Comparator<Block> comparator;

    public Inventory() {
        blockList = new ArrayList<>();
        comparator = new BlockComparator();
    }

    public void displayOnOut() {
        for (Block b : blockList) {
            b.displayInInventory();
        }
    }

    public void addBlock(Block b) {
        blockList.add(b);
        blockList.sort(comparator);
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

    private boolean isSmeltable(int i) {
        return blockAt(i) instanceof SmeltableBlock;
    }

    public SmeltableBlock getSmeltableBlock(int i) throws BlockErrorException {
        if (isSmeltable(i)) {
            return (SmeltableBlock)getBlock(i);
        }

        throw new BlockErrorException("Block at " + i + " is not smeltable");
    }

    public void toggleComaprator() {
        if (comparator instanceof AlphabeticalBlockComparator) {
            comparator = new BlockComparator();
        } else {
            comparator = new AlphabeticalBlockComparator();
        }

        blockList.sort(comparator);
    }

    public Iterator<Block> getIterator() {
        return blockList.iterator();
    }
}
