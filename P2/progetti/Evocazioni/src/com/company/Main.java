package com.company;


import com.company.control.EnergyController;
import com.company.control.MainController;
import com.company.control.PlayerController;
import com.company.control.SummonController;
import com.company.model.energies.*;
import com.company.model.summons.SummonBase;
import com.company.model.summons.SummonUltimate;
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
        // ENERGIES
        List<EnergyController> ec1 = new ArrayList<>();
        ec1.add((new EnergyController(new FireEnergy())));
        ec1.add(new EnergyController(new FireEnergy()));
        ec1.add(new EnergyController(new NeutralEnergy()));
        ec1.add(new EnergyController(new NeutralEnergy()));
        ec1.add(new EnergyController(new DarknessEnergy()));

        List<EnergyController> ec2 = new ArrayList<>();
        ec2.add(new EnergyController(new WaterEnergy()));
        ec2.add(new EnergyController(new WaterEnergy()));
        ec2.add(new EnergyController(new NeutralEnergy()));
        ec2.add(new EnergyController(new DarknessEnergy()));

        // SUMMON
        List<SummonController> sc1 = new ArrayList<>();
        sc1.add(new SummonController(new SummonBase("Ifrit", 30, new FireEnergy(), new Attack("Hellflame", 2, 20))));
        sc1.add(new SummonController(new SummonUltimate("Phoenix", 50, new FireEnergy(), new Attack("Fiammata", 2, 20))));
        sc1.add(new SummonController(new SummonBase("Diablos", 50, new DarknessEnergy(), new Attack("Demi", 1, 20))));

        List<SummonController> sc2 = new ArrayList<>();
        sc2.add(new SummonController(new SummonBase("Leviathan", 30, new WaterEnergy(), new Attack("Tsunami", 1, 10))));
        sc2.add(new SummonController(new SummonUltimate("Bahamut", 60, new WaterEnergy(), new Attack("MegaFlare", 3, 40))));
        sc2.add(new SummonController(new SummonBase("Alexander", 30, new NeutralEnergy(), new Attack("Judgement", 1, 10))));

        // PLAYERS
        PlayerController p1 = new PlayerController(ec1, sc1);
        PlayerController p2 = new PlayerController(ec2, sc2);

        MainController mc = new MainController(p1, p2);

        p1.setMainController(mc);
        p2.setMainController(mc);

        for (EnergyController i : ec1) i.setPlayerController(p1);
        for (EnergyController i : ec2) i.setPlayerController(p2);
        for (SummonController i : sc1) i.setPlayerController(p1);
        for (SummonController i : sc2) i.setPlayerController(p2);

        mc.redraw();

        primaryStage.setTitle("Summons");
        primaryStage.setScene(new Scene(mc.getMv(), 500, 500));
        primaryStage.show();
    }
}
