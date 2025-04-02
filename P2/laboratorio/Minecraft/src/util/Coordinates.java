package util;

import ui.Map;

public class Coordinates {
    private int x;
    private int y;
    private Map map;

    public Coordinates(Map map, int x, int y) {
        this.map = map;
        this.x = x;
        this.y = y;
    }

    public int getY() {
        return y;
    }

    public int getX() {
        return x;
    }

    public boolean checkBounds() {
        return (x >= 0 && y >= 0 && x < map.getWidth() && y < map.getHeight());
    }

    public boolean set(int newX, int newY) {
        if ((new Coordinates(map, newX, newY).checkBounds())) {
            x = newX;
            y = newY;
            return true;
        } else {
            return false;
        }
    }

    public boolean offset(int offsetX, int offsetY) {
        if ((new Coordinates(map, x + offsetX, y + offsetY).checkBounds())) {
            x += offsetX;
            y += offsetY;
            return true;
        } else {
            return false;
        }
    }

    public Coordinates fromOffset(int offsetX, int offsetY) {
        return new Coordinates(map, x + offsetX, y + offsetY);
    }
}
