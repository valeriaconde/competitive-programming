//  main.cpp
//  Programa4Ej1
//  Pide al usuario un valor n, el valor de numerador inicial NI
//  y el valor denominador inicial DI y muestra y calcule el resultado
//  de los primeros n términos de una serie de fracciones

//  La serie empieza con el numerador NI y denominador DI
//  El numerador siempre se incrementa de 1 en 1
//  El denominador se calcula de la siguiente manera:
//    Si el denominador actual es par el siguiente se calcula como denominador + 3
//    Si el denominador actual es impar el siguiente se calcula como denominador + 1

// CASOS PRUEBA
// n = 5
// ni = 1
// di = 1
// MUESTRA = 1/1 + 2/2 + 3/5 + 4/6 + 5/9 = 3.82

// n = 5
// ni = 1
// di = 8
// MUESTRA = 1/8 + 2/11 + 3/12 + 4/15 + 5/16 = 1.13598

//  Created by Valeria Conde
//  A01281637

//  20/01/20.

#include <iostream>

using namespace std;

int main() {
    int n, ni, di;
    double suma = 0;
    
    cout << "Ingrese valor n" << endl;
    cin >> n;
    
    cout << "Ingrese numerador inicial" << endl;
    cin >> ni;
    
    cout << "Ingrese denominador inicial" << endl;
    cin >> di;
    
    for (int i = 1; i <= n; i++) {
        
        cout << ni << "/" << di;
        suma += 1.0 * ni / di;
        
        if (i == n)
            cout << " = ";
        else
            cout << " + ";
        
        ni++;
        
        if (di % 2 == 0)
            di += 3;
        else
            di++;
    
    }

    cout << suma << endl;

    return 0;
}
