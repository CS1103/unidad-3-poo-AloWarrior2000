#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Carga.h"
#include "Simulacion.h"

using namespace std;


int main() {

    int simx, simy;
    cout << "Indicar el tamaño del simulador : " << endl;
    cin >> simx;
    cin >> simy;
    int numcharge;
    do {
        cout << "Indicar número de cargas a insertar (entre 1 y 8) : " << endl;
        cin >> numcharge;
    } while (numcharge < 1 || numcharge > 8);

    Simulacion Sim(simx, simy, numcharge);
    Carga* ArrayCharge = Sim.crear_cargas();
    for (int i = 0; i < simx; i++)
        for (int j = 0; j < simy; j++)
            cout << "X = " << i << "; Y = " << j << " V = " << Sim.PotencialXPunto(ArrayCharge,numcharge,i,j) << endl;



    return 0;

}

