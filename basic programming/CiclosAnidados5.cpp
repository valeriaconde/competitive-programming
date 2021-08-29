//  main.cpp
//  CiclosAnidados3
//  Escribe un programa en C++ que pida 2 valores: ancho y altura y que dibuje en la pantalla un rectángulo de asteriscos de esas dimensiones.
//Por ejemplo:
//Si ancho = 3 y altura = 4
//***
//***
//***
//***


#include <iostream>

using namespace std;

int main() {
    
    int ancho, altura;
    cin >> ancho >> altura;

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= ancho; j++) {
            cout << '+';
        }
        cout << "\n";
    }
    
    return 0;
}
