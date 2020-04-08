//
//  main.cpp
//  h
//
//  Created by Valeria Conde on 28/03/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t > 0) {
        long long n, k;
        cin >> n >> k;
        long long ans = n;
        long long cont = 0;
        
        while(ans >= 1) {
            if (ans % k == 0) {
                ans /= k;
                cont++;
            } else {
                
                cont += ans % k;
                ans = ans - ans % k;
            }
        }
        cout << cont << endl;
        t--;
    }
    return 0;
}
