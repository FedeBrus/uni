package com.company.model;

import java.util.Date;

public interface Farmaco {
    String getNome();
    int getCosto();
    int getCostoEffettivo();
    Date getScandenza();
    boolean isBanco();
    boolean isRipetibile();
}
