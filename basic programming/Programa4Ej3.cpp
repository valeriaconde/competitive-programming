//  main.cpp
//  Programa4Ej3
//  Calcula el monto a pagar por el servicio de internet de una compania

//  Created by Valeria Conde
//  A01281637

//  21/01/20

/*
CASOS PRUEBA
 hora = 7
 duracion = 100
 MUESTRA =
    costo conexion 120
    descuento 0
    costo neto 120

 hora = 8
 duracion = 100
 MUESTRA =
     costo conexion 200
     descuento 60
     costo neto 140

 hora = 8
 duracion = 90
 MUESTRA =
     costo conexion 180
     descuento 0
     costo neto 180
*/

#include <iostream>

using namespace std;

// Funcion aPagar
// Calcula e imprime el costo de conexion y sus descuentos segun las reglas de la compania
// Parametros: numero entero para la hora y numero entero para la duracion en minutos
// Regresa: el valor del costo ya con descuentos
double aPagar(int hora, int duracion) {
    
    double costoConexion = 0;
    double descuento = 0;
    double costoNeto = 0;
    
    if (hora >= 8 && hora < 20) {
        costoConexion = duracion * 2;
        
        if (duracion >= 100) {
            descuento = costoConexion * 0.3;
        }
        
    } else {
        costoConexion = duracion * 1.2;
    }
    
    costoNeto = costoConexion - descuento;

    cout << "Costo de conexion: " << costoConexion << endl;
    cout << "Descuento: " << descuento << endl;
    cout << "Costo Neto: " << costoNeto << endl;
    
    return costoNeto;
}

int main() {
    
    char otraConexion = 'n';
    double subtotal = 0, iva = 0, costoFinal = 0;
    int contadorConexiones = 0, conexionesPico = 0, conexionesNoPico = 0;

    do {

        int hora, duracion;
        
        // Pide al usuario la hora y duracion de la conexion
        cout << "Ingrese la hora de inicio de la conexion (00 - 23)" << endl;
        cin >> hora;

        cout << "Ingrese la duracion de la conexion en minutos" << endl;
        cin >> duracion;

        // Suma el contador de conexiones en hora pico o no pico
        if (hora >= 8 && hora < 20) {
            conexionesPico++;
        } else {
            conexionesNoPico++;
        }
        
        // Agrega al contador del subtotal y de conexiones totales e imprime los datos de la funcion aPagar
        subtotal += aPagar(hora, duracion);
        contadorConexiones += 1;
        
        // Pregunta si desea otra conexion
        cout << "Desea registrar otra conexion (s/n) ?" << endl;
        cin >> otraConexion;

        // Convierte respuesta del usuario a minusculas
        otraConexion = tolower(otraConexion);
        
    } while (otraConexion == 's');

    // Calcula el iva y el costo final de todas las conexiones registradas
    iva = subtotal * 0.15;
    costoFinal = subtotal + iva;
    
    // Imprime datos finales al usuario
    cout << "Conexiones en horas pico: " << conexionesPico << endl;
    cout << "Conexiones en horas no pico: " << conexionesNoPico << endl;
    cout << endl;
    
    cout << "Subtotal: " << subtotal << endl;
    cout << "IVA (15%): " << iva << endl;
    cout << "Total a pagar por todas sus conexiones: " << costoFinal << endl;
    
    return 0;
}
