//
//  main.cpp
//  tt hh
//
//  Created by Valeria Conde on 13/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, b, k, m;
    cin >> a >> b >> k >> m;
    vector<int> ara(a);
    vector<int> arb(b);
    for(int i = 0; i < a; i++) cin >> ara[i];
    for(int i = 0; i < b; i++) cin >> arb[i];
    
    if (ara[k - 1] < arb[b - m]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
