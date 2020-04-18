//
//  main.cpp
//  d
//
//  Created by Valeria Conde on 22/03/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string s;
    int k, cont;
    cin >> s >> k;
    map<char, int> map;
    
    for (int i = 0; i < s.size(); i++) {
        map[s[i]]++;
    }
    
    cont = map.size();
    
    if (k > s.size()) {
        cout << "impossible" << endl;
    } else if (cont > k) {
        cout << 0 << endl;
    } else {
        cout << k - cont << endl;
    }
        
    return 0;
}
