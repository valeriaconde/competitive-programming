// main.cpp
//  Programa5Ej2
// Pregunta al ingeniero cuántas máquinas se van a incluir en el estudio (n) y
// cuantas piezas se va a fabricar en cada una de las máquinas (b)
// Pide para cada máquina los b tiempos en minutos y muestra el tiempo
// promedio de cada máquina y al final muestra cuál fue la máquina
// que tuvo el tiempo promedio mayor y cuál fue ese tiempo.

//  Created by Valeria Conde
//  A01281637
//  22/01/20.

/*
 CASOS PRUEBA
 n=2
 b=2
 tiempos:
 5
 10
 5
 11
 MUESTRA
 maqMayor = 2, promedio 8
 
 n=2
 b=2
 tiempos:
 5
 10
 5
 10
 MUESTRA
 maqMayor = 1, promedio 7.5
 
 n=2
 b=2
 tiempos:
 5
 11
 5
 10
 MUESTRA
 maqMayor = 1, promedio 8
*/

#include <iostream>

using namespace std;

int main() {
    
    int n, b, maqMayor;
    double tiempo, promedio, mayor = 0;
    
    cout << "Cuantas máquinas se van a incluir en el estudio?" << endl;
    cin >> n;
    
    cout << "Cuantas piezas se va a fabricar en cada una de las máquinas?" << endl;
    cin >> b;
    
    for (int i = 1; i <= n; i++) {
        promedio = 0;
        for (int j = 1; j <= b; j++) {
            cout << "Tiempo de la pieza en minutos: ";
            cin >> tiempo;
            promedio += tiempo;
        }
        promedio = promedio / b;
        cout << "Promedio de maquina " << i << ": " << promedio << endl;
        if (promedio > mayor) {
            mayor = promedio;
            maqMayor = i;
        }
    }
    cout << "La maquina mas lenta es la " << maqMayor << " con " << mayor << " minutos de promedio" << endl;
    
    return 0;
}
