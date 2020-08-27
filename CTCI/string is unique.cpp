//
//  main.cpp
//  string is unique
//
//  Created by Valeria Conde on 19/08/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

// determine if a string has all unique characters
#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<char, int> mp;
bool isUnique(string s) {
    for(int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    
    for (auto it : mp) {
        if(it.second > 1) {
            return 0;
        }
    }
    return 1;
}

int main() {
    string s;
    cin >> s;
    
    if (isUnique(s) == 1) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
// could also sort s to save memory
