//
//  main.cpp
//  c
//
//  Created by Valeria Conde on 21/03/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n, t, k, d;
    cin >> n >> t >> k >> d;
    double c = ceil(n/k) * t;
    
    if (c - t > d ) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
