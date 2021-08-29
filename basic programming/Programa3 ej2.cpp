//  main.cpp
//  Programa3 ej2
//  Pide al usuario 4 numeros enteros y muestra en pantalla el mayor de ellos

//  Created by Valeria Conde
//  A01281637

//  16/01/20.


#include <iostream>

using namespace std;

// Funcion mayorDe
// Determina que numero es mayor
// Parametros: dos numeros enteros
// Regresa: el numero mayor de esos dos
int mayorDe(int num1, int num2) {
    int cont;
    
    if (num1 > num2) {
        cont = num1;
    } else {
        cont = num2;
    }
    
    return cont;
}

int main() {

    int a, b, c, d, mayor;
    
    cout << "Ingresa 4 numeros" << endl;
    cin >> a >> b >> c >> d;
        
    mayor = mayorDe(a, b);
    mayor = mayorDe(mayor, c);
    mayor = mayorDe(mayor, d);
    
    cout << "El mayor es: " << mayor << endl;
    
    /*
    CASOS PRUEBA
     
     1 2 3 4
     MUESTRA: 4
     
     -3 444 50 23
     MUESTRA: 444
     
     89 3 5 23
     MUESTRA: 89
     
     1 2 1234 4
     MUESTRA: 1234
     
     */
    
    return 0;
}
