package com.company.control;

import com.company.model.Fan;
import com.company.view.FanPane;
import javafx.event.EventHandler;
import javafx.scene.input.MouseEvent;

public class FanController implements EventHandler<MouseEvent> {
    private Fan fan;
    private UserController uc;

    public FanController(UserController uc, Fan fan) {
        this.fan = fan;
        this.uc = uc;
    }

    public FanPane getView() {
        return new FanPane(uc.isTaken(this), uc.isAffordable(this),
                fan.getBrand(), fan.getCost(), fan.getPowerSupply().getType(),  fan.getMount().getType(), this);
    }

    public Fan getFan() {
        return fan;
    }

    @Override
    public void handle(MouseEvent mouseEvent) {
        uc.take(this);
    }
}
