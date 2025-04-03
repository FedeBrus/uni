//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

package main;

import data.AirBlock;
import data.Block;
import data.WaterBlock;
import ui.MainView;
import ui.Map;
import java.util.Scanner;

public class Main {
    public Main() {
    }

    public static void main(String[] args) {
        MainView mv = new MainView(5, 5);
        mv.displayOnOut();
        for (int i = 0 ; i < 10 ; i++){
            System.out.print("Enter row and then column, or enter '9' and then '9' for smelting: ");

            Scanner myObj = new Scanner(System.in);
            int row = myObj.nextInt();
            int col = myObj.nextInt();
            if (row == 9 && col == 9){
                mv.smelt();
            }else{
                mv.moveIntoFurnace(col, row);
            }
            mv.displayOnOut();
        }
    }
}
