//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

package ui;

import data.*;

import java.util.Random;

public class Map {
    private final int width;
    private final int height;
    private final Block[][] content;

    public Map(int width, int height) {
        // Mappa di default composta da sola aria
        this.width = width;
        this.height = height;
        content = new Block[height][width];

        for (int i = 0; i < height; i++) {
            for(int j = 0; j < width; j++) {
                insertAtCoords(new AirBlock(), j, i);
            }
        }
        
        Random rand = new Random();
        int RANDOM_BLOCKS_TO_ADD = 10;
        for (int i = 0; i < RANDOM_BLOCKS_TO_ADD; i++){
            Block b = new SandBlock();
            int y = rand.nextInt(width);
            int x = rand.nextInt(height);
            insertAtCoords(b, x, y);
        }

        addRiver();
    }

    public int getWidth() {
        return width;
    }

    public int getHeight() {
        return height;
    }

    public void displayOnOut() {
        // Stampa
        for(int i = 0; i < height; ++i) {
            for(int j = 0; j < width; ++j) {
                System.out.print(content[i][j].display());
            }
            System.out.print('\n');
        }
    }

    private void swap(int x, int y) {
        // Scambia un blocco in (x, y) con quello sotto in (x, y + 1)
        if (x >= 0 && y >= 0 && x < width && y < height - 1) {
            if (content[y + 1][x].isFallsThrough()) {
                Block tmp = content[y][x];
                content[y][x] = content[y + 1][x];
                content[y + 1][x] = tmp;
            }
        }
    }

    public void insertAtCoords(Block block, int x, int y) {
        if (x >= 0 && x < width && y >= 0 && y < height) {
            content[y][x] = block;
            fall(x, y);
        }
    }

    private void fall(int x, int y) {
        if (!(x >= 0 && x < width && y >= 0 && y < height - 1)) return;
        if (!content[y][x].isFallsWithGravity()) return;
        if (!content[y + 1][x].isFallsThrough()) return;

        swap(x, y);
        fall(x, y + 1);
    }

    private void addWaterRow(int y) {
        if (y >= 0 && y < height) {
            for (int x = 0; x < width; x++) {
                insertAtCoords(new WaterBlock(), x, y);
            }
        }
    }

    public void addRiver() {
        addWaterRow(0);
    }

    public void addSea() {
        addRiver();
        addRiver();
        addRiver();
    }

    public boolean isSmeltableAt(int x, int y) {
        if (x >= 0 && y >= 0 && x < width && y < height)
            return content[y][x] instanceof SmeltableBlock;

        return false;
    }

    public Block at(int x, int y) {
        if (x >= 0 && y >= 0 && x < width && y < height)
            return content[y][x];

        return new NullBlock();
    }

    public SmeltableBlock SmeltableBlockAt(int x, int y) {
        if (isSmeltableAt(x, y)) {
            return (SmeltableBlock) at(x, y);
        } else {
            return new NullBlock();
        }
    }
}
