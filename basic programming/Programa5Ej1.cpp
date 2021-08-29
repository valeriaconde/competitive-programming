//  main.cpp
//  Programa5Ej1
//  Imprime usando ciclos anidados
// 0/0 0/1 0/2 0/3 0/4 0/5 0/6
// 1/1 1/2 1/3 1/4 1/5 1/6
// 2/2 2/3 2/4 2/5 2/6
// 3/3 3/4 3/5 3/6
// 4/4 4/5 4/6
// 5/5 5/6
// 6/6

//  Created by Valeria Conde
//  A01281637

// 22/01/20

#include <iostream>

using namespace std;

int main() {
    
    for (int i = 0; i <= 6; i++) {
        for (int j = i; j <= 6; j++) {
            cout << i << "/" << j << " ";
        }
        cout << endl;
    }
    return 0;
    
}
