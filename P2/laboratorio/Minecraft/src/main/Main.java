//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

package main;

import data.AirBlock;
import data.Block;
import ui.Map;
import java.util.Scanner;

public class Main {
    public Main() {
    }

    public static void main(String[] args) {
        Map map = new Map(5, 5);

        map.displayOnOut();

        Block b1 = new AirBlock();
        Block b2 = new AirBlock();
        Block b3 = new AirBlock();
        Block b4 = new AirBlock();

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

        System.out.println(b4);
    }
}
