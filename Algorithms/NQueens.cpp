#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits.h>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <utility>
#include <vector>

using namespace std;
int n = 4;

void print(vector<vector<bool>> tablero) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}

bool sePuede(vector<vector<bool>> tablero, int ren, int col) {
    // checa renglon y columna
    for(int i = 0; i < n; i++) {
        if(i != col && tablero[ren][i]) return false;

        if(i != ren && tablero[i][col]) return false;
    }

    // checa derecha-abajo
    for(int i = ren + 1, j = col + 1; i < n && j < n; i++, j++) {
        if(tablero[i][j]) return false;
    }

    // checa derecha-arriba
    for(int i = ren - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if(tablero[i][j]) return false;
    }

    // checa izq-arriba
    for(int i = ren - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if(tablero[i][j]) return false;
    }

    // checa izq-abajo
    for(int i = ren + 1, j = col - 1; i < n && j >= 0; i++, j--) {
        if(tablero[i][j]) return false;
    }


    return true;
}

void backtrack(vector<vector<bool>> tablero, int queens) {
    if(queens <= 0) {
        print(tablero);
        return;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(!tablero[i][j] && sePuede(tablero, i, j)) {
                tablero[i][j] = true;
                backtrack(tablero, queens - 1);
                tablero[i][j] = false;
            }
        }
    }
}

int main() {

    vector<vector<bool>> tablero(n, vector<bool>(n, false));

    backtrack(tablero, n);

    return 0;
}