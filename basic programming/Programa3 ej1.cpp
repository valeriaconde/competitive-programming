//  main.cpp
//  Programa3
//  El usuario da una fecha de inicio y de fin de un evento y el programa
//  muestra ambas fechas en el formato elegido

//  Created by Valeria Conde
//  A01281637

//  16/01/20.

#include <iostream>
#include <iomanip>

using namespace std;

// Funcion muestraFechaCorto
// Recibe los 3 valores enteros de una fecha y los despliega en formato dd/mm/aaa
// Parametros: 3 valores enteros de una fecha
// Imprime: La fecha en formato dd/mm/aaaa
void muestraFechaCorto(int d, int m, int a) {
    cout << setw(2) << setfill('0') << d << "/" << setw(2) << setfill('0') << m << "/" << setw(4) << setfill('0') << a << endl;
}


// Funcion muestraFechaLargo
// Recibe los 3 valores enteros de una fecha y la despliega en formato dd de mesConPalabras de aaaa
// Parametros: 3 valores enteros de una fecha
// Imprime: La fecha en formato dd de mesConPalabras de aaaa
void muestraFechaLargo(int d, int m, int a) {
    
    string mesConPalabras;
    
    if (d <= 31 && d > 0) {
        switch (m) {
            case 1:
                mesConPalabras = "enero";
                break;
            case 2:
                mesConPalabras = "febrero";
                break;
            case 3:
                mesConPalabras = "marzo";
                break;
            case 4:
                mesConPalabras = "abril";
                break;
            case 5:
                mesConPalabras = "mayo";
                break;
            case 6:
                mesConPalabras = "junio";
                break;
            case 7:
                mesConPalabras = "julio";
                break;
            case 8:
                mesConPalabras = "agosto";
                break;
            case 9:
                mesConPalabras = "septiembre";
                break;
            case 10:
                mesConPalabras = "octubre";
                break;
            case 11:
                mesConPalabras = "noviembre";
                break;
            case 12:
                mesConPalabras = "diciembre";
                break;
            default:
                mesConPalabras = "";
                cout<<"ERROR: mes no existente\n";
                break;
        }
        if (mesConPalabras != "")
            cout << setw(2) << setfill('0') << d << " de " << mesConPalabras << " de " << setw(4) << setfill('0') << a << endl;
    } else {
        cout << "FECHA INVALIDA" << endl;
    }
}

int main() {
    
    int diaIn, mesIn, anIn, diaFin, mesFin, anFin;
    char formato;
    
    cout << "Ingresa el dia, mes y año de la fecha de inicio" << endl;
    cin >> diaIn >> mesIn >> anIn;
    
    cout << "Ingresa el dia, mes y año de la fecha de fin" << endl;
    cin >> diaFin >> mesFin >> anFin;
    
    cout << "¿Desea ver las fechas en formato corto (c) o largo (l)?" << endl;
    cin >> formato;

    formato = tolower(formato);
    
    switch (formato) {
        case 'c':
            cout << "La fecha de inicio es: ";
            muestraFechaCorto(diaIn, mesIn, anIn);

            cout << "\nLa fecha final es: ";
            muestraFechaCorto(diaFin, mesFin, anFin);
            break;
            
        case 'l':
            
            cout << "La fecha de inicio es el ";
            muestraFechaLargo(diaIn, mesIn, anIn);
            
            cout << "\nLa fecha final es el ";
            muestraFechaLargo(diaFin, mesFin, anFin);
            break;
            
        default:
            cout << "Formato invalido" << endl;
            break;
    }
    
    // CASOS PRUEBA
    /*
     In: 17 1 1997
     Fin: 7 12 1998
     C
     MUESTRA:
     La fecha de inicio es: 17/01/1997
     La fecha final es: 07/12/1998
     
     In: 17 1 1997
     Fin: 7 12 520
     L
     MUESTRA:
     La fecha de inicio es el 17 de enero de 1997
     La fecha final es el 17 de enero de 0520
     
     */
    
    return 0;
}
