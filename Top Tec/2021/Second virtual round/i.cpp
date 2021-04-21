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
  ll n, k, ans = 0, red = 2, green = 5, blue = 8;
  cin >> n >> k;

  ans += ceil((double)n*red/k);
  ans += ceil((double)n*green/k);
  ans += ceil((double)n*blue/k);

  cout << ans << endl;

  return 0;
}
// le princessval template

