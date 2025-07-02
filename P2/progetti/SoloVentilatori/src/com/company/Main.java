package com.company;

import com.company.control.FanController;
import com.company.control.UserController;
import com.company.model.Fan;
import com.company.model.mount.CeilingMount;
import com.company.model.mount.FloorMount;
import com.company.model.mount.WallMount;
import com.company.model.power.BatteryPowerSupply;
import com.company.model.power.MechanicalPowerSupply;
import com.company.model.power.OutletPowerSupply;
import com.company.model.User;
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.stage.Stage;

import java.util.ArrayList;
import java.util.List;

public class Main extends Application {

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) throws Exception {
        User user = new User();
        UserController uc = new UserController(user);

        List<FanController> fcs = new ArrayList<>();
        FanController fan1 = new FanController(uc, new Fan("Ariete", new BatteryPowerSupply(), new FloorMount()));
        FanController fan2 = new FanController(uc, new Fan("Bosch", new OutletPowerSupply(), new WallMount()));
        FanController fan3 = new FanController(uc, new Fan("Bosch", new MechanicalPowerSupply(), new WallMount()));
        FanController fan4 = new FanController(uc, new Fan("Bosch", new BatteryPowerSupply(), new CeilingMount()));
        FanController fan5 = new FanController(uc, new Fan("Parkside", new OutletPowerSupply(), new CeilingMount()));
        fcs.add(fan1);
        fcs.add(fan2);
        fcs.add(fan3);
        fcs.add(fan4);
        fcs.add(fan5);

        uc.setFanControllers(fcs);

        primaryStage.setTitle("Hello World");
        primaryStage.setScene(new Scene(uc.getMainView(), 500, 350));
        primaryStage.show();
    }
}
