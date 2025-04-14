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
        int i = 0, j = 0;
        Coordinates coords = new Coordinates(this, i, j);

        while (coords.set(i, j)) {
            while (coords.set(i, j)) {
                insertAtCoords(new AirBlock(), coords);
                j++;
            }

            j = 0;
            i++;
        }

        // Inserimento blocchi random
        Random rand = new Random();
        int RANDOM_BLOCKS_TO_ADD = 10;

        for (i = 0; i < RANDOM_BLOCKS_TO_ADD; i++){
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
        for(int i = 0; i < height; ++i) {
            for(int j = 0; j < width; ++j) {
                System.out.print(content[i][j].display());
            }
            System.out.print('\n');
        }
    }

    private void swap(Coordinates coords1, Coordinates coords2) {
        // Scambia due blocchi
        if (coords1.checkBounds() && coords2.checkBounds()) {
            Block tmp = at(coords1);
            content[coords1.getY()][coords1.getX()] = at(coords2);
            content[coords2.getY()][coords2.getX()] = tmp;
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
        int i = 0;
        Coordinates coords = new Coordinates(this, i, y);
        while (coords.set(i, y)) {
            insertAtCoords(new WaterBlock(), coords);
            i++;
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
        if (coords.checkBounds()) return content[coords.getY()][coords.getX()];
        return new NullBlock();
    }

    public SmeltableBlock SmeltableBlockAt(Coordinates coords) {
        if (isSmeltableAt(coords)) return (SmeltableBlock) at(coords);
        return new NullBlock();
    }
}
