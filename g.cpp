//
//  main.cpp
//  ctf g
//
//  Created by Valeria Conde on 01/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

string getK(string s, int k) {
    string pref = s.substr(k - 1);
    string suf = s.substr(0, k - 1);
    
    if (s.size() % 2 == k % 2) {
        reverse(suf.begin(), suf.end());
    }
    
    return pref+suf;
}

int main() {
    int t;
    cin >> t;
    
    while(t > 0) {
        string s;
        int k;
        cin >> k >> s;
        
        string bst = getK(s, 1);
        int ansK = 1;
        for(int i = 2; i <= s.size(); i++) {
            string tmp = getK(s, i);
            if(tmp < bst){
                bst = tmp;
                ansK = i;
            }
        }
        
        cout << bst << endl << ansK << endl;
        t--;
    }

    return 0;
}
