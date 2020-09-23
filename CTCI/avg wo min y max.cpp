//
//  main.cpp
//  khgkhgkjhghg
//
//  Created by Valeria Conde on 22/09/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int media(vector<int> ar) {
    int mn = ar[0], mx = ar[0], total = 0;
    for(int i = 0; i < ar.size(); i++) {
        if (ar[i] < mn) mn = ar[i];
        else if (ar[i] > mx) mx = ar[i];
        total += ar[i];
    }
    total = total - mn - mx;
    return total / (ar.size()-2);
}


int main() {
    vector<int> ar = {100, 30, 50, 70};
    cout << media(ar) << endl;
    return 0;
}
