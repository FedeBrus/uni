package com.company.control;

import com.company.model.Fan;
import com.company.model.User;
import com.company.model.comparators.CostFanComparator;
import com.company.model.comparators.MountFanComparator;
import com.company.view.UserPane;
import javafx.scene.control.Button;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.VBox;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

public class UserController {

    private BorderPane mv;
    private User user;
    private List<FanController> fcs;

    public UserController(User user) {
        mv = new BorderPane();
        // ordinamenti
        VBox orderButtons = new VBox();
        Button mountOrderButton = new Button("Ordina per tipo");
        Button costoOrderButton = new Button("Ordina per costo");
        mountOrderButton.setOnAction(_ -> sort(new MountFanComparator()));
        costoOrderButton.setOnAction(_ -> sort(new CostFanComparator()));
        orderButtons.getChildren().addAll(mountOrderButton, costoOrderButton);

        mv.setRight(orderButtons);

        // altri bottoni
        VBox controlButtons = new VBox();
        Button nextMonthButton = new Button("Prox mese");
        Button increaseBudgetButton = new Button("+100 fondi");
        nextMonthButton.setOnAction(_ -> { user.nextMonth(getMonthlySpending()); refresh(); });
        increaseBudgetButton.setOnAction(_ -> { user.increaseBudget(100); refresh(); });
        controlButtons.getChildren().addAll(nextMonthButton, increaseBudgetButton);

        mv.setLeft(controlButtons);

        this.user = user;
        this.fcs = new ArrayList<>();
        refresh();
    }

    public UserPane getView() {
        return new UserPane(user.getBudget(), getMonthlySpending(), user.getMonths());
    }

    private int getMonthlySpending() {
        int total = 0;
        for (Fan i : user.getFans()) {
            total += i.getCost();
        }
        return total;
    }

    public boolean isTaken(FanController fanController) {
        return user.getFans().contains(fanController.getFan());
    }

    public boolean isAffordable(FanController fanController) {
        return user.getBudget() >= fanController.getFan().getCost();
    }

    public void take(FanController fanController) {
        if (!isTaken(fanController) && isAffordable(fanController)) {
            user.getFans().add(fanController.getFan());
            refresh();
        }
    }

    private void refresh() {
        VBox vb = new VBox();
        for (FanController i : fcs) {
            vb.getChildren().add(i.getView());
        }
        mv.setCenter(vb);
        mv.setTop(getView());
    }

    public BorderPane getMainView() {
        return mv;
    }

    public void setFanControllers(List<FanController> fcs) {
        this.fcs = fcs;
        refresh();
    }

    private void sort(Comparator<Fan> comparator) {
        List<Fan> tmp = new ArrayList<>();
        List<FanController> tmpFcs = new ArrayList<>();

        for (FanController i : fcs) tmp.add(i.getFan());
        tmp.sort(comparator);
        for (Fan i : tmp) tmpFcs.add(new FanController(this, i));

        setFanControllers(tmpFcs);
    }
}
