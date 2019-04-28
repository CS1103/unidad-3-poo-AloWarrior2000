//
// Created by Alonso on 27/04/2019.
//

#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "Carga.h"

using namespace std;

Carga::Carga(){

    srand(time(NULL));
    valor = pow(10, - 6)*(rand()%20);
    pos_x = rand()%20;
    pos_y = rand()%20;
}


