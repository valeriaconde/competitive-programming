//  main.cpp
//  CiclosEj1
/*
 
 El dueño de una papelería quiere sacar notas del consumo por cliente
 y por el total de clientes atendidos
 Vende paquete de hojas a $10.00 y cada pluma a $2.50.
 
 El programa lee el número de paquetes de hojas y de plumas que el cliente comprará y  muestra mensajes como los siguientes:
 Paquetes de hojas $10.00 * cantidad de paquetes comprados = _____ Plumas $2.50 * cantidad de plumas = ______
 Subtotal = ______
 IVA (15%) = ______
 Total = ________
 Desea atender otro cliente (Si/No)
 si el usuario teclea que si se deberá volver al inicio y preguntar de nuevo cuántos paquetes de hojas y cuántas plumas se desean comprar;
 si el usuario teclea que no se deberá mostrar los siguientes mensajes: Número de clientes atendidos = ______
 Total de dinero de las ventas = _______
 
 */

//  Created by Valeria Conde on 20/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {

    int hojas, plumas, numClientes = 0;
    double totalH, totalP, subtotal, iva, total, totalVentas = 0;
    char otroCliente;
    
    do {
        numClientes += 1;
        
        cout << "Cuantos paquetes de hojas llevara?" << endl;
        cin >> hojas;
        
        cout << "Cuantas plumas llevara?" << endl;
        cin >> plumas;
        
        totalH = hojas * 10.0;
        totalP = plumas * 2.5;
        subtotal = totalH + totalP;
        iva = subtotal * 0.15;
        total = subtotal + iva;
        
        cout << "Paquetes de hojas $10.00 * " << hojas << " = " << totalH << endl;
        cout << "Plumas $2.50 * " << plumas << " = " << totalP << endl;
        cout << "Subtotal = " << subtotal << endl;
        cout << "IVA (15%) = " << iva << endl;
        cout << "Total = " << total << endl;
        
        cout << "Desea atender otro cliente (s/n)?" << endl;
        cin >> otroCliente;
        
        totalVentas += total;
    } while (otroCliente == 's');
    
    while (otroCliente == 'n') {
        cout << "Numero de clientes atendidos = " << numClientes << endl;
        cout << "Total dinero de ventas = " << totalVentas << endl;
    }
    
    return 0;
}
