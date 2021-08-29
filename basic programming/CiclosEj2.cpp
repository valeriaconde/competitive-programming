//  main.cpp
//  Ej2Ciclos
//  Pregunta al usuario cuantos numeros quiere analizar e identifica si es par
//  o impar, y los contabiliza

//  Created by Valeria Conde
//  A01281637

//  20/01/20.

#include <iostream>

using namespace std;

int main() {

    int n, cantPares = 0, cantImpares = 0, numero;
    
    // Pregunta al usuario cuantos numeros quiere analizar
    cout << "Cuantos numeros quieres teclear?" << endl;
    cin >> n;
    
    // Realiza un ciclo para pedir los n numeros que quiere el usuario
    for (int i = 1; i <= n; i++) {
        cout << "Teclea el numero " << i << " " << endl;
        cin >> numero;
        
        // Teniendo el numero, analiza si es par o impar y los contabiliza
        if (numero % 2 == 0) {
            cantPares++;
            cout << numero << " es par" << endl;
        } else {
            cantImpares++;
            cout << numero << " es impar" << endl;
        }
    }
    
    // Despliega la cantidad de numeros pares e impares
    cout << "La cantidad de pares es " << cantPares << endl;
    cout << "La cantidad de impares es " << cantImpares << endl;
    
    return 0;
}
