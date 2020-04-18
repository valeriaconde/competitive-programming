//
//  main.cpp
//  k
//
//  Created by Valeria Conde on 01/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    long long b;
    cin >> b;
    
    vector<long long> ar;
    
    for (long long i = 1; i <= sqrt(b); i++) {
        if (b % i == 0) {
            ar.push_back(i);
            if(b / i != i) ar.push_back(b / i);
        }
    }
    
    cout << ar.size() << endl;
    
    return 0;
}
