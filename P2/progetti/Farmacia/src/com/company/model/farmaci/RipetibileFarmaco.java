package com.company.model;

import java.util.Date;

public class RipetibileFarmaco extends AbstractRicettaFarmaco {
    public RipetibileFarmaco(String nome, int costo, Date scadenza) {
        super(nome, costo, scadenza);
    }

    @Override
    public boolean isRipetibile() {
        return true;
    }

    @Override
    public int getCostoEffettivo() {
        return getCosto() - 5;
    }
}
