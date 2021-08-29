//  main.cpp
//  Programa6Ej2
//  Determina el dia siguiente de una fecha considerando si el anio es bisiesto y el mes

//  Created by Valeria Conde
//  A01281637
//  26/01/20

/*
 CASOS PRUEBA
 1 1 1
REGRESA 2/1/1

 28 2 2016
 REGRESA 29/2/2016
 
 28 2 2017
 REGRESA 1/3/2017
 
 30 2 2017
 FECHA INVALIDA
 */


#include <iostream>

using namespace std;

// funcion diasMes
// valida la fecha considerando el numero de dias de cada mes y si el anio es bisiesto
// parametros: dia y anio de la fecha a validar
// regresa: un numero entero de dias que tiene ese mes en ese anio
int diasMes(int validaMes, int validaA) {
    
    switch (validaMes) {
        case 2:
            if (validaA % 4 == 0 && validaA % 100 != 0) {
                return 29;
            } else if (validaA % 100 == 0 && validaA % 400 == 0) {
                return 29;
            } else if (validaA % 400 == 0){
                return 29;
            } return 28;
            break;
            
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
            break;
            
        case 4: case 6: case 9: case 11:
            return 30;
            
        default:
            return 0;
            break;
    }
    
    
    return 0;
}

// funcion checaFecha
// lee la fecha, llama la funcion que valida el dia y determina el dia siguiente de esa fecha
// parametros: tres numeros enteros de una fecha y otros tres enteros por referencia para validar
// regresa: los tres numeros enteros de una fecha por referencia
void checaFecha(int dia, int mes, int anio, int &dia2, int &mes2, int &anio2) {
    dia2 = dia;
    mes2 = mes;
    anio2 = anio;
    
    dia2 += 1;
    if (diasMes(mes2, anio2) < dia2) {
        dia2 = 1;
        mes2++;
    }
    
    if(mes2 == 13) {
        mes2 = 1;
        anio2++;
    }
}

int main() {
    int d1, m1, a1, d2, m2, a2;
    cout << "Ingresa fecha (dd, mm, aaaa) " << endl;
    cin >> d1 >> m1 >> a1;
    
    if (diasMes(m1, a1) == 0 || d1 < 1 || d1 > diasMes(m1, a1)) {
        cout << "Fecha invalida" << endl;
    } else {
        checaFecha(d1, m1, a1, d2, m2, a2);
        cout << "El dia siguiente es: ";
        cout << d2 << "/" << m2 << "/" << a2 << endl;
    }
    
    return 0;
}
