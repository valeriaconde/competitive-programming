//
//  main.cpp
//  ldsjfl
//
//  Created by Valeria Conde on 05/02/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

/*
 Se tiene un archivo llamado 'ventas.txt' que tiene en cada línea el número de día del mes, el número de clientes atendidos ese día y el total de ventas del día. Se requiere que hagas un programa que muestre en la pantalla qué día se obtuvieron las ventas más altas y de cuánto fueron; y además qué día se atendió al menor número de clientes y cuántos fueron.
 
 El programa deberá decir que el día 3 del mes fue el día que se obtuvieron las ventas más altas y la cantidad vendida fue 890500 y además deberá decir que el día que se atendieron menos clientes fue el día 2 que se atendieron 3 clientes.
 NOTA: En el archivo no necesariamente vienen todos los datos del mes, es decir, no sabemos cuántos renglones contiene.

 
 dia    num clientes    tot
 
    

 */

#include <iostream>
#include <fstream>

using namespace std;


int main() {
    
    ifstream archivo;
    archivo.open("ventas.txt");
    
    int dia, numC, total, mayorVenta = 0, diaVenta, menosClientes = INT_MAX, diaClientes;
    
    while(archivo >> dia >> numC >> total) {
        
        if (total > mayorVenta) {
            mayorVenta = total;
            diaVenta = dia;
        }
        
        if (numC < menosClientes) {
            menosClientes = numC;
            diaClientes = dia;
        }
    }

    
    archivo.close();
    
}
