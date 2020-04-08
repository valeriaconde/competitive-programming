//
//  main.cpp
//  cf b
//
//  Created by Valeria Conde on 26/03/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
using namespace std;

const int maxN = 1e5 + 5;
long long acum[maxN];

int main() {
    int t;
    cin >> t;
    
    acum[0] = 0; acum[1] = 1;
    for(int i = 2; i < maxN; i++){
        acum[i] = i + acum[i - 1];
    }
    
    while (t > 0) {
        int n, k;
        cin >> n >> k;
        
        int i = 0;
        while(acum[i] < k) i++;
        
        cout << i << endl;
        
        string l(n - i - 1, 'a');
        int diff = acum[i] - k;
        string mid(diff, 'a');
        int qnt = n - i + diff + 1;
        string r(n - qnt, 'a');
        
        cout << l << 'b' << mid << 'b' << r << endl;
        
        
        t--;
    }
    
    return 0;
}
