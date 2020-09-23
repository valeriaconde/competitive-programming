//
//  main.cpp
//  rev str word
//
//  Created by Valeria Conde on 22/09/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void rev(string& s, int in, int fn) {
    for(int i = in, j = fn; i < j; i++, j--) {
        swap(s[i], s[j]);
    }
}

string wordRev(string s) {
    rev(s, 0, s.size()-1);
    int in = 0, fn = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            fn = i-1;
            rev(s, in, fn);
            in = i+1;
        } else if (i == s.size()-1) {
            fn = s.size()-1;
            rev(s, in, fn);
        }
    }
    return s;
}

int main() {
    string s;
    getline(cin, s);
    cout << wordRev(s) << endl;
    return 0;
}
