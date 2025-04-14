package util;

import ui.Map;

public class Coordinates {
    private int x;
    private int y;
    private Map map;

    public Coordinates(Map map, int x, int y) {
        this.map = map;
        if (checkBounds()) {
            this.x = x;
            this.y = y;
        } else {
            this.x = 0;
            this.y = 0;
        }
    }

    public int getY() {
        return y;
    }

    public int getX() {
        return x;
    }

    public boolean checkBounds() {
        return checkBounds(x, y);
    }

    public boolean checkBounds(int x, int y) {
        return (x >= 0 && y >= 0 && x < map.getWidth() && y < map.getHeight());
    }

    public boolean set(int newX, int newY) {
        if (checkBounds(newX, newY)) {
            x = newX;
            y = newY;
            return true;
        } else {
            return false;
        }
    }

    public boolean offset(int offsetX, int offsetY) {
        return set(x + offsetX, y + offsetY);
    }

    public Coordinates fromOffset(int offsetX, int offsetY) {
        return new Coordinates(map, x + offsetX, y + offsetY);
    }
}
