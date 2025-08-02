package com.company.model;

import java.util.Date;

public class BancoFarmaco extends AbstractFarmaco {
    public BancoFarmaco(String nome, int costo, Date scadenza) {
        super(nome, costo, scadenza);
    }

    @Override
    public int getCostoEffettivo() {
        return getCosto();
    }

    @Override
    public boolean isBanco() {
        return true;
    }

    @Override
    public boolean isRipetibile() {
        return true;
    }
}
