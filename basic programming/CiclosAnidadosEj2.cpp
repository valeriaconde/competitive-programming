//  main.cpp
//  CiclosAnidadosEj2

// La temperatura promedio se calcula como el promedio de todas las mediciones de temperatura de ese día. Y cada día se toman n mediciones de temperatura.

// El programa debe mostrar la temperatura promedio de cada día y al final cuál fue el día que tuvo la temperatura menor.

//  Created by Valeria Conde on 22/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.

#include <iostream>

using namespace std;

int main() {
    
    int dias, mediciones, menor = 0, diaMenor;
    double temperatura;
    
    cout << "Cuantos dias quiere analizar?" << endl;
    cin >> dias;
    
    cout << "Cuantas mediciones de temperatura quiere analizar en cada dia?" << endl;
    cin >> mediciones;
    
    for (int i = 1; i <= dias; i++) {
        double promedio = 0;
        for (int j = 1; j <= mediciones; j++) {
            cout << "Datos para el dia " << i << " -> " << "temperatura " << j << ": ";
            cin >> temperatura;
            promedio += temperatura;
        }
        promedio = promedio / mediciones;
        cout << "La temperatura promedio del dia " << i << " es " << promedio << endl;
        if (i == 1) {
            menor = promedio;
            diaMenor = i;
        } else {
            if (promedio < menor) {
                menor = promedio;
                diaMenor = i;
            }
        }
    }
    
    cout << "El dia con menor temperatura fue el dia " << diaMenor << endl;
    return 0;
}
