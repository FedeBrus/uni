//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

package main;

import ui.MainView;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        MainView mv = new MainView(5, 5);
        int choice;
        Scanner sc = new Scanner(System.in);
        do {
            choice = sc.nextInt();
            switch (choice) {
                case 1 -> mv.displayOnOut();
                case 2 -> {
                    int x = sc.nextInt();
                    int y = sc.nextInt();
                    mv.moveIntoFurnace(x, y);
                }
                case 3 -> mv.smelt();
                case 4 -> mv.retrieveFromFurnace();
                case 5 -> {
                    int i = sc.nextInt();
                    mv.putInFurnace(i);
                }
            }
        } while (choice != 0);
    }
}
