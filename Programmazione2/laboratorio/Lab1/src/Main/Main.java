//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

package Main;

import data.Block;
import data.Map;
import java.util.Scanner;

public class Main {
    public Main() {
    }

    public static void main(String[] args) {
        Map map = new Map(5, 5);

        map.displayOnOut();

        Block b1 = new Block('#', false, false);
        Block b2 = new Block('@', true, false);
        Block b3 = new Block('@', true, false);
        Block b4 = new Block('@', true, false);

        System.out.println("-----");
        map.insertAtCoords(b1, 0, 4);
        map.displayOnOut();
        System.out.println("-----");
        map.insertAtCoords(b2, 0, 2);
        map.displayOnOut();
        System.out.println("-----");
        map.insertAtCoords(b3, 0, 1);
        map.displayOnOut();
        System.out.println("-----");
        map.insertAtCoords(b4, 2, 1);
        map.displayOnOut();
    }
}
