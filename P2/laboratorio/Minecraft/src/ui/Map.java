//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

package ui;

import data.*;
import util.Coordinates.Coordinates;
import util.Coordinates.WrongCoordinatesException;

import java.util.Random;

public class Map {
    private final int width = 10;
    private final int height = 10;
    private final Block[][] content;

    public Map() {
        content = new Block[height][width];
        // Mappa di default composta da sola aria
        try {
            Coordinates coords = new Coordinates();
            for (int i = 0; i < height; i++) {
                for (int j = 0; j < width; j++) {
                    coords.set(i, j);
                    insertAt(new AirBlock(), coords);
                }
            }

            // Inserimento blocchi random
            Random rand = new Random();
            int RANDOM_BLOCKS_TO_ADD = 20;

            for (int i = 0; i < RANDOM_BLOCKS_TO_ADD; i++) {
                Block b = new SandBlock();
                coords.set(rand.nextInt(width), rand.nextInt(height));
                insertAt(b, coords);
            }

            // Inserimento fiume
            addRiver();

        } catch (WrongCoordinatesException wce) {
            System.out.println("Map Initialization Failed");
            System.out.println(wce.getMessage());
        }
    }

    public void displayOnOut() {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                System.out.print(content[i][j].display());
            }
            System.out.print("\n");
        }
    }

    private void swap(Coordinates coords1, Coordinates coords2) throws WrongCoordinatesException {
        // Scambia due blocchi
        if (isInRange(coords1) && isInRange(coords2)) {
            Block tmp = at(coords1);
            content[coords1.getY()][coords1.getX()] = at(coords2);
            content[coords2.getY()][coords2.getX()] = tmp;
        }
    }

    public void insertAt(Block block, Coordinates coords) throws WrongCoordinatesException {
        if (isInRange(coords)) {
            content[coords.getY()][coords.getX()] = block;
            update(coords);
        } else {
            throw new WrongCoordinatesException("Coordinates out of bounds");
        }
    }

    private void update(Coordinates coords) throws WrongCoordinatesException {
        if (!isInRange(coords)) return;
        if (at(coords) == null) return;
        if (!at(coords).isFallsWithGravity()) return;

        Coordinates belowCoords = coords.fromOffset(0, 1);
        if (!isInRange(belowCoords)) return;
        if (!at(belowCoords).isFallsThrough()) {
            if (at(coords) instanceof SandBlock && at(belowCoords) instanceof TorchBlock) {
                removeAt(coords);
            }

            return;
        }

        swap(coords, belowCoords);
        update(belowCoords);
    }

    private void addWaterRow(int y) throws WrongCoordinatesException {
        Coordinates coords = new Coordinates();
        for (int i = 0; i < width; i++) {
            coords.set(i, y);
            insertAt(new WaterBlock(), coords);
        }
    }

    public void addRiver() throws WrongCoordinatesException {
        addWaterRow(0);
    }

    public void addSea() throws WrongCoordinatesException {
        for (int i = 0; i < 3; i++) addRiver();
    }

    private boolean isSmeltableAt(Coordinates coords) throws WrongCoordinatesException {
        return at(coords) instanceof SmeltableBlock;
    }

    private boolean isPickableAt(Coordinates coords) throws WrongCoordinatesException {
        return at(coords).isPickable();
    }

    private SmeltableBlock smeltableBlockAt(Coordinates coords) throws BlockErrorException, WrongCoordinatesException {
        if (isSmeltableAt(coords)) return (SmeltableBlock)at(coords);
        throw new BlockErrorException("Block at " + coords + " is not smeltable");
    }

    public Block pickableBlockAt(Coordinates coords) throws BlockErrorException, WrongCoordinatesException {
        if (isPickableAt(coords)) return at(coords);
        throw new BlockErrorException("Block at " + coords + " is not pickable");
    }

    public Block at(Coordinates coords) throws WrongCoordinatesException {
        if (isInRange(coords)) return content[coords.getY()][coords.getX()];
        throw new WrongCoordinatesException("Coordinates out of bounds");
    }

    public void removeAt(Coordinates coords) throws WrongCoordinatesException {
        insertAt(new AirBlock(), coords);
        for (int i = coords.getY(); i >= 0; i--) {
            update(new Coordinates(coords.getX(), i));
        }
    }

     private boolean isInRange(Coordinates coords) {
        if (coords != null) {
            return (coords.getX() >= 0 && coords.getX() < width && coords.getY() >= 0 && coords.getY() < height);
        } else {
            return false;
        }
    }
}
