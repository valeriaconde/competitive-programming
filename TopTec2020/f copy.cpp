//
//  main.cpp
//  f
//
//  Created by Valeria Conde on 22/03/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string revStr(string s){
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    return tmp;
}

string addOne(string s) {
    string tmp = s;
    bool carry = true;
    for (int i = (int) tmp.size() - 1; i >= 0; i--) {
        if (tmp[i] == '9' && carry) {
            tmp[i] = '0';
        } else if(carry) {
            tmp[i]++;
            carry = false;
        }
    }
    if (carry) tmp = "1" + tmp;
    return tmp;
}

bool all9 (string &k) {
    for (int i = 0; i < k.size(); i++) {
        if (k[i] != '9') return false;
    }
    return true;
}

string mkp(string s, int sz) {
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    if (sz % 2 == 1) {
        return s + tmp.substr(1);
    }
    return s + tmp;
}

int main() {
    int t;
    cin >> t;
    
    while (t > 0) {
        string k;
        cin >> k;
        int sz = k.size();
        string fHalf, sHalf;
        
        if (all9(k)) {
            int x = sz - 1;
            string zeros(x, '0');
            cout << '1' << zeros << '1' << endl;
        } else if (k.size() == 1) {
            cout << addOne(k) << endl;
        } else {
            switch (sz % 2) {
                case 0:
                    fHalf = k.substr(0, sz / 2);
                    sHalf = k.substr(sz / 2);
                    break;
                    
                case 1:
                    fHalf = k.substr(0, sz / 2 + 1);
                    sHalf = k.substr(sz / 2);
                    break;
            }
            
            int i, j;
                i = (int) fHalf.size() - 1;
                j = 0;
                while (i >= 0 && j < sHalf.size() && fHalf[i] == sHalf[j]) {
                    i--;
                    j++;
                }
              
            if (i == -1 || fHalf[i] < sHalf[j]) {
                cout << mkp(addOne(fHalf), sz) << endl;
            } else if (fHalf[i] > sHalf[j]) {
                cout << mkp(fHalf, sz) << endl;
            }
        }
        t--;
    }
    
    return 0;
}
