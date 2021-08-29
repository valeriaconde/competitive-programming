#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007

//  Riko Pollo

ll power(ll k){
    if (k == 1){
        cout << 2;
        return 0;
    }
    else if (!(k & 1)){
        cout << "(";
        power(k >> 1);
        cout << ")^2";
    } else{
        cout << "(2*";
        power(k-1);
        cout << ")";
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n;
        cin >> n;
        power(n);
        cout << endl;
    }

    return 0;
}