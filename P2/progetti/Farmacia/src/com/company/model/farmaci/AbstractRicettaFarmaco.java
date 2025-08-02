package com.company.model;

import java.util.Date;

public abstract class AbstractRicettaFarmaco extends AbstractFarmaco {
    public AbstractRicettaFarmaco(String nome, int costo, Date scadenza) {
        super(nome, costo, scadenza);
    }

    @Override
    public boolean isBanco() {
        return false;
    }
}
