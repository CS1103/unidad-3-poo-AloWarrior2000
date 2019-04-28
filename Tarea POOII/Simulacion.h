//
// Created by Alonso on 27/04/2019.
//

#ifndef SIMULACION_H
#define SIMULACION_H

#include "Carga.h"


class Simulacion{

    int size_x, size_y, amount_charge;

public:
    Simulacion(int x, int y, int carganum){
        size_x = x;
        size_y = y;
        amount_charge = carganum;
    }

    Carga* crear_cargas();
    double DistPuntoCarga(Carga part, int x, int  y);
    double PotencialXPunto(Carga* ArrCargas, int LenArr, int cor_x, int cor_y);



};

#endif