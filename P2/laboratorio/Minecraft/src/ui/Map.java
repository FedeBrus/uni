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
        Coordinates coords = new Coordinates(this, 0, 0);
        for (int i = 0; coords.checkBounds(); i++) {
            for(int j = 0; coords.checkBounds(); j++) {
                insertAtCoords(new AirBlock(), coords);
                coords.set(j, i);
            }
        }

        // Inserimento blocchi random
        Random rand = new Random();
        int RANDOM_BLOCKS_TO_ADD = 10;
        for (int i = 0; i < RANDOM_BLOCKS_TO_ADD; i++){
            Block b = new SandBlock();
            coords.set(rand.nextInt(width), rand.nextInt(height));
            insertAtCoords(b, coords);
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
        // Stampa
        Coordinates coords = new Coordinates(this, 0, 0);
        for(int i = 0; i < height; ++i) {
            for(int j = 0; j < width; ++j) {
                System.out.print(at(coords).display());
                coords.offset(j, 0);
            }
            coords.offset(0, i);
            System.out.print('\n');
        }
    }

    private void swap(Coordinates coords1, Coordinates coords2) {
        // Scambia due blocchi
        if (coords1.checkBounds() && coords2.checkBounds()) {
            Block tmp = at(coords1);
            insertAtCoords(at(coords1), coords2);
            insertAtCoords(at(coords2), coords1);
        }
    }

    public void insertAtCoords(Block block, Coordinates coords) {
        if (coords.checkBounds()) {
            content[coords.getY()][coords.getX()] = block;
            update(coords);
        }
    }

    private void update(Coordinates coords) {
        if (!coords.checkBounds()) return;
        if (!at(coords).isFallsWithGravity()) return;
        Coordinates belowCoords = coords.fromOffset(0, 1);
        if (!at(belowCoords).isFallsThrough()) return;

        swap(coords, belowCoords);
        update(belowCoords);
    }

    private void addWaterRow(int y) {
        Coordinates coords = new Coordinates(this, 0, y);
        for (int x = 0; coords.checkBounds(); x++) {
            insertAtCoords(new WaterBlock(), coords);
            coords.offset(1, y);
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
        if (coords.checkBounds()) return at(coords);
        return new NullBlock();
    }

    public SmeltableBlock SmeltableBlockAt(Coordinates coords) {
        if (isSmeltableAt(coords)) return (SmeltableBlock) at(coords);
        return new NullBlock();
    }
}
