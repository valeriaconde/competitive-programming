//
//  main.cpp
//  CiclosAnidados6
//Escribe un programa en C++ que pida 2 valores: ancho y altura y que dibuje en la pantalla un marco de asteriscos de esas dimensiones.
//Por ejemplo:
//Si ancho = 5 y altura = 3
//*****
//*   *
//*****


#include <iostream>

using namespace std;

int main() {
    
    int ancho, altura;
    cin >> ancho >> altura;
    
    
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= ancho; j++) {
            if (i == 1 || i == altura || j == 1 || j == ancho) {
                cout << "x ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    
    return 0;
}
