package util;

public class Coordinates {
    private int x;
    private int y;

    public Coordinates(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public Coordinates() {
        this(0, 0);
    }

    public int getY() {
        return y;
    }

    public int getX() {
        return x;
    }

    public void set(int newX, int newY) {
        x = newX;
        y = newY;
    }

    public void offset(int offsetX, int offsetY) {
        set(x + offsetX, y + offsetY);
    }

    public Coordinates fromOffset(int offsetX, int offsetY) {
        return new Coordinates(x + offsetX, y + offsetY);
    }

    public String toString() {
        return "(" + x + ", " + y + ")";
    }
}
