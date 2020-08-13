//
//  main.cpp
//  e
//
//  Created by Valeria Conde on 01/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> ar;
    bool ans = true;
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) ar.push_back(i);
    }
    
    for(int i = 0; i < ar.size(); i++) {
        ans = true;
        string s = to_string(ar[i]);
        for(int j = 0; j < s.size(); j++) {
            if (s[j] != '4' && s[j] != '7') {
                ans = false;
                break;
            }
        }
        
        if(ans) break;
    }
        
    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
