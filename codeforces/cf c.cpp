//
//  main.cpp
//  cf c
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
        int n;
        string x, a = "", b = "";
        cin >> n >> x;
        
        int i = 0;
        
        while(i < n && x[i] != '1'){
            if(x[i] == '2'){
                a += '1';
                b += '1';
            } else{
                a += '0';
                b += '0';
            }
            i++;
        }
        
        if(i < n){
            a += '1';
            b += '0';
            i++;
        }
        
        while(i < n){
            switch (x[i]) {
                case '0':
                    b += '0';
                    a += '0';
                    break;
                    
                case '1':
                    b += '1';
                    a += '0';
                    break;
                    
                default:
                    b += '2';
                    a += '0';
                    break;
            }
            i++;
        }
        cout << a << endl << b << endl;
        t--;
    }
    
    
    return 0;
}
