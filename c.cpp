//
//  main.cpp
//  c
//
//  Created by Valeria Conde on 01/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, w, x, y, z;
    vector<int> sums;

    
    for(int i = 0; i < 4; i++) {
        cin >> w;
        sums.push_back(w);
    }
    
    sort(sums.begin(), sums.end());
    
    int maxi = sums[3];
    
    a = maxi - sums[1];
    b = maxi - sums[2];
    c = maxi - sums[0];
    
    cout << a << " " << b << " " << c << endl;
    
    return 0;
}
