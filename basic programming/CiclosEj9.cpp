//  main.cpp
//  Ej9Ciclos
//  Los padres de un ni;o le regalaran $10 cuando cumpla 12 a;os
//  y cada cumplea;os doblaran la cantidad hasta que el obsequio exceda 1000

//  El programa indica la edad que tendra el ni;o cuando reciba
//  el ultimo obsequio y la cantidad total recibida

//  Created by Valeria Conde
//  A01281637

//  20/01/20.

#include <iostream>

using namespace std;

int main() {
    
    int regalo = 10, edad = 12, totalRegalo = 0;
    
    while (regalo <= 1000) {
        totalRegalo += regalo;
        edad++;
        regalo *= 2;
        
    }
    cout << "edad del ultimo regalo " << edad - 1 << endl;
    cout << "regalo total recibido " << totalRegalo << endl;
    
    return 0;
}
