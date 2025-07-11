package com.company;


import com.company.control.MainController;
import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

public class Main extends Application {

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) throws Exception {
        MainController mc = new MainController();

        primaryStage.setTitle("Hello World");
        primaryStage.setScene(new Scene(mc.getView(), 300, 275));
        primaryStage.show();
    }
}
