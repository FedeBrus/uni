//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

package main;

import ui.MainView;
import util.Coordinates;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        MainView mv = new MainView(5, 5);
        int choice;
        Scanner sc = new Scanner(System.in);
        do {
            System.out.println("Inserire un'opzione: ");
            choice = sc.nextInt();
            switch (choice) {
                case 1 -> mv.displayOnOut();
                case 2 -> {
                    int x = sc.nextInt();
                    int y = sc.nextInt();
                    mv.pickUp(new Coordinates(x, y));
                }
                case 3 -> {
                    int i = sc.nextInt();
                    mv.putInFurnace(i);
                }
                case 4 -> mv.smelt();
                case 5 -> mv.retrieveOutputFromFurnace();
                case 6 -> mv.retrieveInputFromFurnace();
            }
        } while (choice != 0);
    }
}
