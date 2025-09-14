package com.company.model.mutations;

import com.company.model.Player;
import com.company.model.Spell;

public class DefenseMutation extends AbstractMagicMutation {
    @Override
    public void apply(Player p) {
        p.addSpell(Spell.QUEN);
    }

    @Override
    public void remove(Player p) {
        p.removeSpell(Spell.QUEN);
    }

    @Override
    public String getName() {
        return "Quen";
    }
}
