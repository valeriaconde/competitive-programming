// la princessval
// arrancandolo con altura
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits.h>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <utility>
#include <vector>
#define MOD 1000000007
#define LLMAX 9223372036854775807LL
using namespace std;
typedef long long ll;

/*
 Moamen has an array of n
 n
  distinct integers. He wants to sort that array in non-decreasing order by doing the following operations in order exactly once:

 Split the array into exactly k
 k
  non-empty subarrays such that each element belongs to exactly one subarray.
 Reorder these subarrays arbitrary.
 Merge the subarrays in their new order.
 A sequence a
 a
  is a subarray of a sequence b
 b
  if a
 a
  can be obtained from b
 b
  by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.

 Can you tell Moamen if there is a way to sort the array in non-decreasing order using the operations written above?
*/

int main() {
    int t, n, k;
    cin >> t;
    while(t--) {
      cin >> n >> k;
      
      // numero, posicion
      vector<pair<int, int>> arr;
      for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back({x, i});
      }
        
      sort(arr.begin(), arr.end());
        
      int ans = 1;
      for(int i = 1; i < n; i++) {
        if(arr[i - 1].second != arr[i].second - 1) ans++;
      }

      if(ans <= k) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
    return 0;
}
