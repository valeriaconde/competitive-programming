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
 // haz el for para leer los nums
  vector<int> ar;
  int boxes;
  cin >> boxes;
  int ans = 0;

   for(int i = 0; i < boxes; i++) {
      int x;
      cin >> x;
      ar.push_back(x);
    }

  vector<int> sorted = ar;
  sort(sorted.begin(), sorted.end());

  int currEl = sorted[0], currIndex = 0;
  
  for(int i =0; i < boxes; i++) {
    if(currEl == ar[i]) {
      currIndex++;
      if(currIndex < boxes) {
        currEl = sorted[currIndex];
      } 
    } else {
      ans++;
    }
  }

  cout << ans << endl;
  
    return 0;
}