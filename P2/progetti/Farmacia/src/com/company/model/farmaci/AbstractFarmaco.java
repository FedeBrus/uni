package com.company.model;

import java.util.Date;

public abstract class AbstractFarmaco implements Farmaco {
    private String nome;
    private int costo;
    private Date scadenza;

    public AbstractFarmaco(String nome, int costo, Date scadenza) {
        this.nome = nome;
        this.costo = costo;
        this.scadenza = scadenza;
    }

    @Override
    public String getNome() {
        return nome;
    }

    @Override
    public int getCosto() {
        return costo;
    }

    @Override
    public Date getScandenza() {
        return scadenza;
    }
}
