//
//  main.cpp
//  fibonacci45
//
//  Created by Valeria Conde on 30/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ar = {0, 1};
    
    for (int i = 1; i < n; i++) {
        int fib = ar[i] + ar[i-1];
        ar.push_back(fib % 10);
    }
    
//  for(int i =0 ;i < ar.size();i++) cout << ar[i] << " ";
    cout << ar[n] << endl;
    
    return 0;
}
