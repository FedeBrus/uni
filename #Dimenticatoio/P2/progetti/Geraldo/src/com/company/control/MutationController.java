package com.company.control;

import com.company.model.CantMutateException;
import com.company.model.mutations.Mutation;
import com.company.view.MutationPane;
import javafx.event.EventHandler;
import javafx.scene.Node;
import javafx.scene.input.MouseEvent;

public final class MutationController implements EventHandler<MouseEvent> {
    private Mutation mutation;
    private MutationPane mp;
    private PlayerController pc;
    private boolean toBeAdded;

    public MutationController(PlayerController pc, Mutation mutation) {
        this.mutation = mutation;
        mp = new MutationPane(mutation, this);
        this.pc = pc;
        toBeAdded = true;
    }

    @Override
    public void handle(MouseEvent mouseEvent) {
        try {
            if (toBeAdded) {
                pc.addMutation(this);
                mp.setLabelPrefix("-");
            } else {
                pc.removeMutation(this);
                mp.setLabelPrefix("+");
            }
            toBeAdded = !toBeAdded;
        } catch (CantMutateException e) {
            System.out.println("non si può aggiungere quella mutazione");
        }
    }

    public Mutation getMutation() {
        return mutation;
    }

    public MutationPane getView() {
        return mp;
    }
}
