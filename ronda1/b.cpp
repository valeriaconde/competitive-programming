//
//  main.cpp
//  b
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
    
    while (n > 0) {
        int h, m, rH, rM;
        cin >> h >> m;
        
        if (h == 23) {
            cout << 60 - m << endl;
        } else {
            rH = 23 - h;
            rM = 60 - m + rH * 60;
            cout << rM << endl;
        }
        n--;
    }
    
    return 0;
}
