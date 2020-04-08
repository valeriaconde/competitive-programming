//
//  main.cpp
//  af d
//
//  Created by Valeria Conde on 01/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int last = s.size() - 1;
    
    if (s[last] == 'A' || s[last] == 'C' || s[last] == 'E' || s[last] % 2 == 0) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }
    
    
    return 0;
}
