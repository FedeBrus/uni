package com.company.model.mutations;

import com.company.model.Player;
import com.company.model.Spell;

public class FireMutation extends AbstractMagicMutation{
    @Override
    public void apply(Player p) {
        p.addSpell(Spell.IGNI);
    }

    @Override
    public void remove(Player p) {
        p.removeSpell(Spell.IGNI);
    }

    @Override
    public String getName() {
        return "Igni";
    }
}
