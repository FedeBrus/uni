//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

package data;

public class Map {
    private int width;
    private int height;
    private Block[][] content;

    public Map(int width, int height) {
        this.width = width;
        this.height = height;
        this.content = new Block[width][height];

        for(int i = 0; i < height; ++i) {
            for(int j = 0; j < width; ++j) {
                this.content[i][j] = new Block();
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
                this.content[i][j].display();
            }
        }

    }

    public void changeCell(char c, int i, int j) {
        this.content[i][j].setContent(c);
    }
}
