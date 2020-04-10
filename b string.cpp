//
//  main.cpp
//  b
//
//  Created by Valeria Conde on 01/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cont = 0;
    int ans;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a') cont++;
    }
    
    if (cont > s.size() / 2) {
        cout << s.size() << endl;
    } else {
        cout << cont * 2 - 1 << endl;
    }
    
    return 0;
}
