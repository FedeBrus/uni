//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

package ui;

import data.*;
import util.Coordinates;

import java.util.Random;

public class Map {
    private final int width;
    private final int height;
    private final Block[][] content;

    public Map(int width, int height) {
        this.width = width;
        this.height = height;
        content = new Block[height][width];

        // Mappa di default composta da sola aria
        Coordinates coords = new Coordinates();
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                coords.set(i, j);
                insertAt(new AirBlock(), coords);
            }
        }

        // Inserimento blocchi random
        Random rand = new Random();
        int RANDOM_BLOCKS_TO_ADD = 10;

        for (int i = 0; i < RANDOM_BLOCKS_TO_ADD; i++) {
            Block b = new SandBlock();
            coords.set(rand.nextInt(width), rand.nextInt(height));
            insertAt(b, coords);
        }

        // Inserimento fiume
        addRiver();
    }

    public int getWidth() {
        return width;
    }

    public int getHeight() {
        return height;
    }

    public void displayOnOut() {
        Coordinates coords = new Coordinates();
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                coords.set(j, i);
                System.out.print(at(coords).display());
            }
            System.out.print("\n");
        }
    }

    private void swap(Coordinates coords1, Coordinates coords2) {
        // Scambia due blocchi
        if (isInRange(coords1) && isInRange(coords2)) {
            Block tmp = at(coords1);
            content[coords1.getY()][coords1.getX()] = at(coords2);
            content[coords2.getY()][coords2.getX()] = tmp;
        }
    }

    public void insertAt(Block block, Coordinates coords) {
        if (isInRange(coords)) {
            content[coords.getY()][coords.getX()] = block;
            update(coords);
        }
    }

    private void update(Coordinates coords) {
        if (!isInRange(coords)) return;
        if (at(coords) == null) return;
        if (!at(coords).isFallsWithGravity()) return;

        Coordinates belowCoords = coords.fromOffset(0, 1);
        if (!at(belowCoords).isFallsThrough()) return;

        swap(coords, belowCoords);
        update(belowCoords);
    }

    private void addWaterRow(int y) {
        Coordinates coords = new Coordinates();
        for (int i = 0; i < width; i++) {
            coords.set(i, y);
            insertAt(new WaterBlock(), coords);
        }
    }

    public void addRiver() {
        addWaterRow(0);
    }

    public void addSea() {
        for (int i = 0; i < 3; i++) addRiver();
    }

    public boolean isSmeltableAt(Coordinates coords) {
        return at(coords) instanceof SmeltableBlock;
    }

    public Block at(Coordinates coords) {
        if (isInRange(coords)) return content[coords.getY()][coords.getX()];
        return new NullBlock();
    }

    public SmeltableBlock SmeltableBlockAt(Coordinates coords) {
        if (isSmeltableAt(coords)) return (SmeltableBlock)at(coords);
        return new NullBlock();
    }

    public void removeAt(Coordinates coords) {
        if (isInRange(coords)) {
            insertAt(new NullBlock(), coords);
        }
    }

    public boolean isInRange(Coordinates coords) {
        if (coords != null) {
            return (coords.getX() >= 0 && coords.getX() < width && coords.getY() >= 0 && coords.getY() < height);
        } else {
            return false;
        }
    }
}
