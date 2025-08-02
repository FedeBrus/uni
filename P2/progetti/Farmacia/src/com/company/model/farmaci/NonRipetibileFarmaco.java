package com.company.model;

import java.util.Date;

public class NonRipetibileFarmaco extends AbstractRicettaFarmaco {
    public NonRipetibileFarmaco(String nome, int costo, Date scadenza) {
        super(nome, costo, scadenza);
    }

    @Override
    public boolean isRipetibile() {
        return false;
    }

    @Override
    public int getCostoEffettivo() {
        return getCosto() - 10;
    }
}
