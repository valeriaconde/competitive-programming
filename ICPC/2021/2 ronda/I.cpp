#include <iostream>
#include <algorithm>

using namespace std;


//39
int multiplicative(int n) {
    int persistence=0;
    int ans = 1;

    while(n > 9) {
      int tmp = n; // 3
      while(tmp > 0) {
          ans *= tmp % 10;
          tmp /= 10;
      }
      persistence++;
      n = ans;
      ans = 1;
      
    }
  
    return persistence;
}

int main(){
  int t;
  cin >> t;
  while(t>0){
    int n; cin >> n;
    cout << multiplicative(n) << endl;
    t--;
  }
}
