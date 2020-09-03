//
//  main.cpp
//  zero matrix
//
//  Created by Valeria Conde on 03/09/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
// nxm matrix, if an element is 0, the entire row and column are set to 0

/*
  3 4
  1 2 3 4
  2 0 3 4
  5 5 5 4
 
  1 0 3 4
  0 0 0 0
  5 0 5 4
  
 ===
 
 4 3
 0 1 2
 2 3 4
 3 3 0
 4 4 4
 
 */

vector<vector<int>> zeroize(vector<vector<int>> matrix, int n, int m) {
    vector<vector<int>> resultingMatrix = matrix;
    vector<int> rowsToChange; // 3 4 5
    vector<int> colsToChange; // 2 1
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < m; col++) {
            if(matrix[row][col] == 0) {
                rowsToChange.push_back(row);
                colsToChange.push_back(col);
            }
        }
    }
    
    for(int row = 0; row < rowsToChange.size(); row++) {
        for(int i = 0; i < m; i++) {
            resultingMatrix[rowsToChange[row]][i] = 0;
        }
    }
    
    for(int col = 0; col < colsToChange.size(); col++) {
        for(int i = 0; i < n; i++) {
            resultingMatrix[i][colsToChange[col]] = 0;
        }
    }
    
    // print original matrix
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    // print resulting matrix
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << resultingMatrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return resultingMatrix;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int num;
            cin >> num;
            matrix[i][j] = num;
        }
    }
    
    zeroize(matrix, n, m);
    
    return 0;
}
