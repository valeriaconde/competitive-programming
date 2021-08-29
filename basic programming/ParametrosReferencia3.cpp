//  main.cpp
//  ParametrosReferenciaEj2

//  Escribe una función que reciba como parámetro una cantidad de segundos y que regrese en 3 parámetros por referencia las horas, minutos y segundos equivalentes a los segundos recibidos.
//  Nota que la función tendrá 4 parámetros.
//  Ahora escribe un programa que pida al usuario una cantidad de segundos y le muestre en la pantalla las horas, minutos y segundos equivalentes.

//  Created by Valeria Conde on 23/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>

using namespace std;

void segundos(int cantSegundos, int &horas, int &minutos, int &segundos) {
    horas = cantSegundos / 3600;
    minutos = (cantSegundos % 3600) / 60;
    segundos = cantSegundos % 3600 % 60;

    cout << "horas : " << horas << ", minutos: " << minutos << ", segundos: " << segundos << endl;
}

int main() {
    
    int segs, h, m, s;
    
    cout << "Ingrese cantidad de segundos: ";
    cin >> segs;
    
    segundos(segs, h, m, s);
    
    return 0;
}
