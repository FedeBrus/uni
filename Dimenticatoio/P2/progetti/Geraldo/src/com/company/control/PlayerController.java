package com.company.control;

import com.company.model.CantMutateException;
import com.company.model.Player;
import com.company.model.mutations.Mutation;
import com.company.view.MutationPane;
import com.company.view.PlayerMutationsPane;
import com.company.view.PlayerStatsPane;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;
import javafx.scene.text.Text;

import java.util.List;

public class PlayerController {

    private BorderPane mv;
    private Player player;

    public PlayerController(Player player, List<Mutation> availableMutations) {
        this.player = player;
        mv = new BorderPane();

        BorderPane bottom = new BorderPane();
        bottom.setTop(new Text("Mutazioni disponibili"));
        HBox hb = new HBox();
        for (Mutation i : availableMutations) {
            MutationController mc = new MutationController(this, i);
            hb.getChildren().add(mc.getView());
        }
        bottom.setCenter(hb);
        mv.setBottom(bottom);
        refresh();
    }

    public BorderPane getMainView() {
        return mv;
    }

    public void refresh() {
        mv.setLeft(new PlayerStatsPane(player));
        mv.setRight(new PlayerMutationsPane(player.getMutations()));
    }

    public void addMutation(MutationController mutationController) throws CantMutateException {
        mutationController.getMutation().addToPlayer(player);
        refresh();
    }

    public void removeMutation(MutationController mutationController) {
        mutationController.getMutation().removeFromPlayer(player);
        refresh();
    }
}
