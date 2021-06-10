//
//  main.cpp
//  tf e
//
//  Created by Valeria Conde on 01/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n % 4 == 1) {
        cout << "0 A" << endl;
    } else if (n % 4 == 2) {
        cout << "1 B" << endl;
    } else if (n % 4 == 3) {
        cout << "2 A" << endl;
    } else {
        cout << "1 A" << endl;
    }
    
    return 0;
}
