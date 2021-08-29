#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> ar;
    for(long long i = 0; i < n; i++) {
        int x;
        cin >> x;
        ar.push_back(x);
    }
    sort(ar.begin(), ar.end());
    
    long long ans = ar[n-1] * ar[n-2];
    
    cout << ans << endl;

    return 0;
}
