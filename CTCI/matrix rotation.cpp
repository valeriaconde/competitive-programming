//
//  main.cpp
//  matrix rotation
//
//  Created by Valeria Conde on 03/09/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

// rotate nxn matrix 90 degrees
vector<vector<int>> rotate(vector<vector<int>> matrix, int n) {
    vector<vector<int>> rotatedMatrix(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            rotatedMatrix[j][i] = matrix[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << rotatedMatrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return rotatedMatrix;
}


int main() {
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            mat[i][j] = x;
        }
    }
    
    rotate(mat, n);
    
    return 0;
}
