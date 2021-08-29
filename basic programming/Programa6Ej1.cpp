// main.cpp
//  Programa6Ej1
//
//  Created by Valeria Conde on 27/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//
   
#include <iostream>

using namespace std;

void maxFracc(int num1, int denom1, int num2, int denom2, int numMax, int denomMax){
    double n1 = 1.0 * num1 / denom1;
    double n2 = 1.0 * num2 / denom2;

    if(n1 > n2){
        numMax = num1;
        denomMax = denom1;
    } else {
        numMax = num2;
        denomMax = denom2;
    }
}

int main(){
    
    int n1, d1, n2, d2, n3, d3, nMax, dMax;

    cout << "Dame fraccion 1: ";
    cin >> n1 >> d1;

    cout << "Dame fraccion 2: ";
    cin >> n2 >> d2;

    cout << "Dame fraccion 3: ";
    cin >> n3 >> d3;

    maxFracc(n1, d1, n2, d2, nMax, dMax);
    maxFracc(nMax, dMax, n3, d3, nMax, dMax);

    cout << "La fraccion mayor es: ";
    cout << nMax << "/" << dMax;

    return 0;

}
