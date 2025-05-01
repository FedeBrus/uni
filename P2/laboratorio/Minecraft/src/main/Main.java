//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

package main;

import data.*;
import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;
import ui.gui.BlockPane;
import ui.gui.FurnacePane;
import ui.gui.InventoryPane;
import ui.gui.MapPane;

public class Main extends Application {
    public static void main(String[] args) {
        /*
        MainView mv = new MainView(5, 5);
        int choice;
        Scanner sc = new Scanner(System.in);
        do {
            System.out.println("Inserire un'opzione: ");
            System.out.println("1: display");
            System.out.println("2: pick up block");
            System.out.println("3: put in furnace");
            System.out.println("4: smelt");
            System.out.println("5: retrieve furnace output");
            System.out.println("6: retrieve furnace input");
            System.out.println("7: toggle inventory comparator");
            choice = sc.nextInt();
            switch (choice) {
                case 1 -> mv.displayOnOut();
                case 2 -> {
                    System.out.println("x: ");
                    System.out.println("y: ");
                    int x = sc.nextInt();
                    int y = sc.nextInt();
                    try {
                        mv.pickUp(new Coordinates(x, y));
                    } catch (WrongCoordinatesException wce) {
                        System.out.println("Input Coordinates are out of bounds");
                    }
                }
                case 3 -> {
                    int i = sc.nextInt();
                    mv.putInFurnace(i);
                }
                case 4 -> mv.smelt();
                case 5 -> mv.retrieveOutputFromFurnace();
                case 6 -> mv.retrieveInputFromFurnace();
                case 7 -> mv.toggleInventoryComparator();
            }
        } while (choice != 0);
        */

        launch(args);
    }

    @Override
    public void start(Stage stage) throws Exception {
        InventoryPane inventory = new InventoryPane();
        inventory.addBlock(new BlockPane(new SandBlock()));
        inventory.addBlock(new BlockPane(new WaterBlock()));
        inventory.addBlock(new BlockPane(new AirBlock()));
        inventory.addBlock(new BlockPane(new GlassBlock()));

        MapPane map = new MapPane();

        FurnacePane furnace = new FurnacePane();

        stage.setTitle("Minecraft");
        stage.setScene(new Scene(furnace, 300, 275));
        stage.show();
    }
}
