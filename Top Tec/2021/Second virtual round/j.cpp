// la princessval
// arrancandolo con altura
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_set>
#include <stack>
#define MOD 1000000007
#define LLMAX 9223372036854775807LL
using namespace std;
typedef long long ll;

int main() {
  int t; cin >> t;

  while(t--) {
    ll l, r, a, b, c;
    ll sum = 0;
    cin >> l >> r;

    if(l & 1) {
      a = -1;
      b = 1;
    } else {
      a = 1;
      b = -1;
    } 
    if(r&1) c = -1;
    else c = 1;
    sum = 2*a*l+b+c+2*c*r;

    cout << sum / 4 << endl;
  }
  return 0;
}
// le princessval template

