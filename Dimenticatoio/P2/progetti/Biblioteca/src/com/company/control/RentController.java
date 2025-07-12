package com.company.control;

import com.company.model.CantRentException;
import com.company.view.RentPane;

public class RentController {
    private MainController mc;
    private PublicationListController plc;
    private RentPane rp;

    public RentController(PublicationListController plc, MainController mc) {
        this.mc = mc;
        this.plc = plc;
        this.rp = new RentPane(this);
        redraw();
    }

    private void redraw() {
        rp = new RentPane(this);
        mc.setRentController(this);
    }

    public void rent(int days) {
        try {
            plc.rent(days);
            redraw();
        } catch (CantRentException e) {
            System.out.println("massa di");
        }
    }

    public PublicationListController getPlc() {
        return plc;
    }

    public RentPane getView() {
        return rp;
    }
}
