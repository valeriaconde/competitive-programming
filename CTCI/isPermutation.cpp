//
//  main.cpp
//  2
//
//  Created by Valeria Conde on 20/08/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

//  decide if a string is a permutation of the other
#include <iostream>
#include <map>
using namespace std;

bool isPermutation(string a, string b) {
    map<char, int> mp;
    
    if (a.size() == b.size()) {
        for (int i = 0; i < a.size(); i++) {
            mp[a[i]]++;
        }
        
        for (int i = 0; i < b.size(); i++) {
            mp[b[i]]--;
        }
    } else {
        return 0;
    }
    
    for (auto it : mp) {
        if (it.second > 0) return 0;
    }
    return 1;
}
 
int main() {
    string a, b;
    cin >> a >> b;
    
    cout << isPermutation(a, b) << endl;
    return 0;
}
