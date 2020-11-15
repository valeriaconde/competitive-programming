#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#define MOD 1000000007
using namespace std;
typedef long long ll;

// HARE EL B AQUI

int main() {
    int n; cin >> n;

    vector<vector<int>> mat(10, vector<int>(10, 0));
    
    for(int i = 0; i < n; i++) {
      int d, l, r, c;
      cin >> d >> l >> r >> c;
      r--; c--;

      if(d == 0) {
        if(r < 0 || r >= 10 || c < 0 || c >= 10 || c+l-1 < 0 || c+l-1 >= 10) {
          cout << "N" << endl;
          return 0;
        }  

        for(int i = c; i <= c+l-1; i++) {
         if(mat[r][i] == 1) {
           cout << "N" << endl;
           return 0;
         } else {
           mat[r][i] = 1;
         }
        }  
      } else {
        if(r < 0 || r >= 10 || c < 0 || c >= 10 || r+l-1 < 0 || r+l-1 >= 10) {
          cout << "N" << endl;
          return 0;
        }  

        for(int i = r; i <= r+l-1; i++) {
         if(mat[i][c] == 1) {
           cout << "N" << endl;
           return 0;
         } else {
           mat[i][c] = 1;
         }
        }  
      }

    }

    cout << "Y" << endl;
  

    
  
    return 0;
}