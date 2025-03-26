//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

package ui;

import data.AirBlock;
import data.Block;

public class Map {
    private int width;
    private int height;
    private Block[][] content;

    public Map(int width, int height) {
        this.width = width;
        this.height = height;
        this.content = new Block[height][width];

        for(int i = 0; i < height; ++i) {
            for(int j = 0; j < width; ++j) {
                this.content[i][j] = new AirBlock();
            }
        }
    }

    public int getWidth() {
        return this.width;
    }

    public int getHeight() {
        return this.height;
    }

    public void displayOnOut() {
        for(int i = 0; i < this.height; ++i) {
            for(int j = 0; j < this.width; ++j) {
                System.out.print(this.content[i][j].display());
            }
            System.out.print('\n');
        }
    }

    private void swap(int x, int y) {
        if (x >= 0 && y >= 0 && x < width - 1 && y < height - 1) {
            if (content[y + 1][x + 1].isFallsThrough()) {
                Block tmp = content[y][x];
                content[y][x] = content[y + 1][x + 1];
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
}
