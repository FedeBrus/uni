package com.company.control;

import com.company.model.titles.Title;
import com.company.view.TitlePane;
import javafx.event.EventHandler;
import javafx.scene.Node;
import javafx.scene.input.MouseEvent;

public class TitleController implements EventHandler<MouseEvent> {
    private Title title;
    private MainController mc;
    private TitlePane tp;

    public TitleController(Title title, MainController mc) {
        this.title = title;
        this.mc = mc;
        this.tp = new TitlePane(this);
    }

    public Title getTitle() {
        return title;
    }

    @Override
    public void handle(MouseEvent mouseEvent) {
        mc.selectTitle(this);
    }

    public TitlePane getView() {
        return tp;
    }

    public void reset() {
        title.reset();
    }

    public void addSeason() {
        title.addSeason();
    }
}
