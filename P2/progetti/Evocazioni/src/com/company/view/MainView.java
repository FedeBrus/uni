package com.company.view;

import javafx.scene.Node;
import javafx.scene.layout.BorderPane;

public class MainView extends BorderPane {
    public MainView(EnergyMenu ep1, SummonMenu sp1, EnergyMenu ep2, SummonMenu sp2) {
        setLeft(ep1);
        setBottom(sp1);
        setRight(ep2);
        setTop(sp2);
    }

    public void swap() {
        Node tmp = getLeft();
        setLeft(getRight());
        setRight(tmp);

        tmp = getTop();
        setTop(getBottom());
        setBottom(tmp);
    }
}
