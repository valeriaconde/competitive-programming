//
//  main.cpp
//  i
//
//  Created by Valeria Conde on 24/03/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m;

    vector<string> arN;
    vector<string> arM;
    
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        arN.push_back(s);
    }
    
    for(int i = 0; i < m; i++) {
        string t;
        cin >> t;
        arM.push_back(t);
    }
    
    cin >> q;
    while (q != 0) {
        string ans ="";
        int y;
        cin >> y;
        y--;
        ans = arN[y % n] + arM[y % m];
        cout << ans << endl;
        q--;
    }

    return 0;
}
