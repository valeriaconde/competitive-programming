#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#define MOD 1000000007
using namespace std;
typedef long long ll;

int main() {
    int bet = 100;
    int currBet = 100;
    
    int c; cin >> c;
    
    for(int i = 0; i < c; i++) {
      int x; cin >> x;
      currBet += x;
      bet = max(bet, currBet);
    }

    cout << bet << endl;
  
    return 0;
}