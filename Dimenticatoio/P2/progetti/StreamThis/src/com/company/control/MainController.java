package com.company.control;

import com.company.model.titles.Title;
import com.company.view.MainView;
import com.company.view.OrderPanel;
import com.company.view.SelectedTitlePane;
import com.company.view.TitleListPane;

public class MainController {
    private TitleController selectedTitleController;
    private MainView mv;

    public MainController() {
        mv = new MainView(this);
    }

    public void selectTitle(TitleController tc) {
        if (selectedTitleController != null) selectedTitleController.reset();
        selectedTitleController = tc;
        mv.setCenter(new SelectedTitlePane(tc));
    }

    public void setTop(TitleListPane tlp) {
        mv.setTop(tlp);
    }

    public MainView getView() {
        return mv;
    }

    public void setRight(OrderPanel orderPanel) {
        mv.setRight(orderPanel);
    }
}
