//
//  main.cpp
//  tf d
//
//  Created by Valeria Conde on 01/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, em = 0, gan = 0, per = 0;
    cin >> n;
    vector<int> yo;
    vector<int> el;
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        yo.push_back(x);
    }
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        el.push_back(x);
    }
    
    for(int i = 0; i < yo.size();i++) {
        if (yo[i] == el[i]) em++;
        else if (yo[i] > el[i]) gan++;
        else per++;
    }
    
    if (gan > per) {
        cout << 1 << endl;
    } else if (gan == 0) {
        cout << -1 << endl;
    } else {
        int tmp = gan;
        while(tmp <= per) {
            tmp+=gan;
        }
        cout << tmp / gan << endl;
    }
    
    return 0;
}
