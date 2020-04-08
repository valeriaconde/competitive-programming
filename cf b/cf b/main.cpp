//
//  main.cpp
//  cf b
//
//  Created by Valeria Conde on 01/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char c;
    string s;
    cin >> c >> s;
    string ans = "";
    
    
    if (c == 'E') {
        char ant = s[0];
        int cont = 1;
        for(int i = 1; i < s.size(); i++) {

            if (s[i] == ant) {
                cont++;
            } else {
                ans += ant;
                ans += cont + '0';
                cont = 1;
            }

            ant = s[i];
            
        }
        ans += ant;
        ans += cont + '0';
        
        
    } else {
        for(int i = 0 ; i < s.size(); i+=2) {
            char let = s[i];
            int cant = s[i + 1] - '0';
            while (cant > 0) {
                ans += let;
                cant--;
            }
        }
    }
    
    cout << ans << endl;

    return 0;
}
