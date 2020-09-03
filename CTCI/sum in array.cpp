//
//  main.cpp
//  sum in array
//
//  Created by Valeria Conde on 31/08/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.

#include <iostream>
#include <vector>
using namespace std;

// 10
// 1 2 3 4 5 6 7 8 9 10

bool thereIsXinArr(vector<int> ar, int n) {
    for (int i = 0; i < ar.size(); i++) {
        int lo = i+1, hi = ar.size()-1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if(ar[i] + ar[mid] == n) return 1;
            if(ar[i] + ar[mid] > n) {
                hi = mid-1;
            } else {
                lo = mid+1;
            }
        }
    }
    return 0;
}

int main() {
    int n, x;
    vector<int> ar;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int x;
        cin >> x;
        ar.push_back(x);
    }
    cout << "num: ";
    cin >> x;
    
    cout << thereIsXinArr(ar, x) << endl;
    
    return 0;
}
