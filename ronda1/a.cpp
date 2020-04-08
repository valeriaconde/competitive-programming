//
//  main.cpp
//  toptec
//
//  Created by Valeria Conde on 19/03/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool j = false;
    
    vector<int> arr;
    
    for (int i  = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            j = true;
            break;
        } else {
            j = false;
        }
    }
      
    if (j == true) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
    
}
