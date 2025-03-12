package data;

public class Map {
    private int width;
    private int height;
    private Block[][] content;

    public Map(int width, int height) {
        this.width = width;
        this.height = height;
        content = new Block[width][height];
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                content[i][j] = new Block();
            }
        }
    }

    public int getWidth() {
        return width;
    }

    public int getHeight() {
        return height;
    }

    public void displayOnOut() {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                content[i][j].display();
            }
        }
    }

    public void changeCell(char c, int i, int j) {
        content[i][j].setContent(c);
    }
}
