// la princessval
// arrancandolo con altura
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
    int t;
    cin >> t;
    
    while(t > 0) {
        int n, k, zeros = 0;
        string s;
        cin >> n >> k >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] == 1) {
                if(i - k < 0 || i + k > n) {
                    if(i - k < 0) {
                        for(int j = 0; j < i; j++) {
                            s[j] = 1;
                        }
                    }
                    
                    if (i + k > n) {
                        for(int j = i; j < n; j++) {
                            s[j] = 1;
                        }
                    }
                } else {
                    for(int j = 0, f = 0; j < k; f--, j++) {
                            s[j] = 1;
                            s[f] = 1;
                    }
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (s[i] == 0) zeros++;
        }
        
        cout << ceil(zeros / (k+1)) << endl;
        
        t--;
    }

    return 0;
}
// le princessval template
