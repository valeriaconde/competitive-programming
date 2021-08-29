//  main.cpp
//  CiclosAnidadosEj1
//  se pida al usuario cada una de las ventas realizadas en el día; cuando ya no hay mas ventas en el día el programa debe mostrar el total de ventas de ese día y preguntar al usuario si se desea procesar otro día, si el usuario dice que si se debe repetir el proceso anterior para calcular el total de ventas del otro día. Cuando ya no se quieran procesar más días el programa debe mostrar al final el promedio de ventas de todos los días.


//  Created by Valeria Conde on 22/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    char respVentas, respDias;
    double ventas, totalVentas, totalFinal = 0;
    int dia = 0;
    do {
        dia++;
        totalVentas = 0;
        do {
            cout << "Teclea la cantidad de ventas $" << endl;
            cin >> ventas;
            totalVentas = totalVentas + ventas;
            cout << "Quieres registrar otra venta?" << endl;
            cin >> respVentas;
        } while (tolower(respVentas) == 's');
        cout << "Total de ventas del dia " << dia << " = $" << totalVentas << endl;
        totalFinal += totalVentas;
        cout << "Quieres procesar otro dia?" << endl;
        cin >> respDias;
    } while (tolower(respDias) == 's');
    cout << "El promedio de ventas es $" << (totalFinal / dia) << endl;
    return 0;
}
