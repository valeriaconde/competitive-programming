//
//  main.cpp
//  edit away
//
//  Created by Valeria Conde on 26/08/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
// valeria
// valesria

bool oneAway(string a, string b) {
    int dif = 0;
    if(a.size() == b.size()) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) dif++;
            if (dif > 1) return 0;
        }
    } else {
        int tmp = abs((int) a.length() - (int)b.length());
        if(tmp > 1) {
            return 0;
        } else {
            int mxSize = max(a.size(), b.size());
            string minStr, maxStr;
            if (mxSize == b.size()) {
                minStr = a;
                maxStr = b;
            } else {
                minStr = b;
                maxStr = a;
            }
            for (int i = 0, j = 0; i < mxSize; ) {
                if (maxStr[i] != minStr[j]) {
                    i++;
                    dif++;
                } else {
                    i++;
                    j++;
                }
                if (dif > 1) return 0;
            }
        }
    }
    return 1;
}


int main() {
    string a = "f", b;
    while (a != "ya") {
        cin >> a >> b;
        cout << oneAway(a, b) << endl;
    }
    
    return 0;
}
