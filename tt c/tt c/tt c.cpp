//
//  main.cpp
//  tt c
//
//  Created by Valeria Conde on 06/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t > 0) {
        int n, m;
        cin >> n >> m;
        vector<int> grades;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            grades.push_back(x);
        }
        
        int dif = m - grades[0];
        int highEnough = 0;
        
        int sum = 0;
        for(int i =1 ; i < grades.size();i++) {
            sum += grades[i];
        }
        
        cout << min(m, grades[0] + sum) << endl;
        t--;
    }
    return 0;
}
