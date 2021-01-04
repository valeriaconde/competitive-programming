// la princessval
// arrancandolo con altura
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#define MOD 1000000007
using namespace std;
typedef long long ll;

void decompress(string& compressed, int k) {
    string og;
    int i = 0, repeat;
    ll len = 0;
    bool isVal = 1;
    while (i < compressed.length()) {
      // chars solitos
        while (isalpha(compressed[i])) {
          len++;
          if(len > k) {
            isVal = 0;
            break;
          }
          og.push_back(compressed[i++]);
        }
        // conv a int 
        repeat = 0;
        while (isdigit(compressed[i])) {
          repeat = 10 * repeat + (compressed[i++] - '0');
          if(len + repeat > k) {
            isVal = 0;
            break;
          }
        }

        // mult char x num
        auto chtonum = compressed[i++];
        while (repeat--) {
          len++;
          if(len > k) {
            isVal = 0;
            break;
          }
          og.push_back(chtonum);
        }
    }
  if (isVal) cout << og << endl;
  else cout << "unfeasible" << endl;
}

int main() {
    int t;
    cin >> t;
    
    while(t > 0) {
       string s;
       int k;
       cin >> s;
       cin >> k;
       
       decompress(s, k);

/*
4 5a2bc 8 5a2bc 7 asdf4x 50 asjkdf10000000000kz 1000000
*/
        t--;
    }

    return 0;
}
// le princessval template

