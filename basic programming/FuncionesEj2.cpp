//
//  main.cpp
//  Ej2 funciones
// Pedimos al usuario 4 numeros y despliega el menor de los 4
//
//  Created by Valeria Conde
//  A01281637

// 13/01/20.

#include <iostream>

using namespace std;

// menorNumeros
// Encuentra y regresa el menor de los dos numeros recibidos de parametro
// Parametros de entrada: numero 1 y numero 2 enteros
// Retorno: El numero menor de los 2 recibidos
int menorNumeros(int num1, int num2) {
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int n1, n2, n3, n4, menor;
    
    cout << "Teclea 4 numeros enteros" << endl;
    cin >> n1 >> n2 >> n3 >> n4;
    
    menor = menorNumeros(n1, n2);
    menor = menorNumeros(menor, n3);
    menor = menorNumeros(menor, n4);

    cout << "El menor de " << n1 << n2 << n3 << n4 << " es " << menor << endl;
    return 0;
}
