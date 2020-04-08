//
//  main.cpp
//  cf a
//
//  Created by Valeria Conde on 26/03/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t > 0) {
        int a, b, num, ans;
        cin >> a >> b;
        
        if (a % b == 0) {
            cout << 0 << endl;
        } else {
            num = a / b;
            num *= b;
            num += b;
            ans = num - a;
            cout << ans << endl;
        }
        t--;
    }
    return 0;
}
