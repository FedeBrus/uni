package ui.inventory;

import data.Block;

import java.util.Comparator;

public class BlockComparator implements Comparator<Block> {
    @Override
    public int compare(Block block, Block t1) {
        if (block.blockId() == t1.blockId()) {
            return 0;
        } else if (block.blockId() > t1.blockId()) {
            return 1;
        } else {
            return -1;
        }
    }
}
