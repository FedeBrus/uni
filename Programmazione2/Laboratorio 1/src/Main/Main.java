package Main;

import data.Map;

import java.sql.SQLOutput;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Map map = new Map(3, 3);
        for (int i = 0; i < map.getWidth() * map.getHeight(); i++) {
            System.out.print("Enter row: ");
            Scanner myObj = new Scanner(System.in);
            int row = myObj.nextInt();

            System.out.print("Enter column: ");
            int col = myObj.nextInt();

            System.out.println("Changing: " + row + " - " + col);

            System.out.println("Enter character: ");
            char c = (myObj.next()).charAt(0);

            map.changeCell(c, row, col);
        }

        map.displayOnOut();
    }
}
