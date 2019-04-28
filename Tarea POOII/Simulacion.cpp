//
// Created by Alonso on 27/04/2019.
//

#include <math.h>
#include "Carga.h"
#include "Simulacion.h"


Carga* Simulacion::crear_cargas() {
    Carga* ArrCar = new Carga[amount_charge];
    for (int i = 0; i < amount_charge; i++)
        ArrCar[i] = Carga();
    return ArrCar;

}

double Simulacion::DistPuntoCarga(Carga part, int x, int  y){

    int posx = part.pos_x - x;
    int posy = part.pos_y - y;

    return sqrt(pow(posx,2) + pow(posy,2));

}

double Simulacion::PotencialXPunto(Carga* ArrCargas, int LenArr, int cor_x, int cor_y){
    double const k = 8.99*pow(10,-9);
    double r, q;
    double v = 0;
    for (int m = 0; m < LenArr; m++ ){
        r = DistPuntoCarga(ArrCargas[m],cor_x,cor_y);
        q = ArrCargas[m].valor;
        v = v + k*q/r;
    }
    return v;

}
