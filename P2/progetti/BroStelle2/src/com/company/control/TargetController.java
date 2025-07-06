package com.company.control;

import com.company.model.Target;
import com.company.view.TargetPane;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;

public class TargetController implements EventHandler<ActionEvent> {
    private Target target;
    private TargetPane tp;
    private MainController mc;

    public TargetController(Target target, MainController mc) {
        this.target = target;
        this.tp = new TargetPane(this);
        this.mc = mc;
        mc.setTarget(this);
    }

    public Target getTarget() {
        return target;
    }

    public TargetPane getView() {
        return tp;
    }

    @Override
    public void handle(ActionEvent actionEvent) {
        target.reset();
        update();
    }

    public void update() {
        tp = new TargetPane(this);
        mc.setTarget(this);
    }
}
