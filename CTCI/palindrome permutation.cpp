//
//  main.cpp
//  palindrome permutation
//
//  Created by Valeria Conde on 26/08/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <unordered_map>
using namespace std;

bool isPalindromePermutation(string s) {
    unordered_map<char, int> mp;
    // casi constante; map es nlogn
    for(int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    
    // un iterador de un map es pair, auto adivina el tipo de dato
    int cont = 0;
    for (auto it : mp) {
        if (it.second & 1) cont++;
        if (cont >= 2) return 0;
    }
    
    if (!(s.size() & 1)) {
        if (cont > 0) return 0;
    } else {
        if (cont > 1) return 0;
    }
    return 1;
}


int main() {
    string s;
    cin >> s;
    cout << isPalindromePermutation(s) << endl;
    
    return 0;
}
// if(s[i] >= 'a' && s[i] <= 'z') mapear sin espacios
