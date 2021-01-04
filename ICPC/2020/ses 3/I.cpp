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

int ad(int i) {
  int desc = i;
  if (i >= 500 ) {
     desc -= 100;
     return desc;
  }
  else return desc;
}

int main() {
    int tot3dif, i21, i22, i23, tot;
    vector<int> totales;
    vector<int> precios;
    for(int i = 0; i < 3; i++) {
      int x;
      cin >> x;
      precios.push_back(x);
    }

  // discount 3 dif orders
  tot3dif = ad(precios[0]) + ad(precios[1]) + ad(precios[2]);

  // 21
  i21 = ad(precios[0] + precios[1]) + ad(precios[2]);

  // 22
  i22 = ad(precios[0] + precios[2]) + ad(precios[1]);

  // 23
  i23 = ad(precios[1] + precios[2]) + ad(precios[0]);

// 3 juntos
  tot = ad(precios[0]+precios[1]+precios[2]);

totales.push_back(tot3dif);
totales.push_back(i21);
totales.push_back(i22);
totales.push_back(i23);
totales.push_back(tot);

sort(totales.begin(), totales.end());
cout << totales[0] << endl;

return 0;
}
// le princessval template

