// la princessval
// arrancandolo con altura
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#define MOD 1000000007
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;
    
    for (int i =0; i < s.size(); i++){
        switch (s[i]) {
            case 'O':
            case 'o':
                cout << 0;
                break;
            case 'I':
            case 'i':
                cout << 1;
                break;
            case 'Z':
            case 'z':
                cout << 2;
                break;
            case 'E':
            case 'e':
                cout << 3;
                break;
            case 'A':
            case 'a':
                cout << 4;
                break;
            case 'S':
            case 's':
                cout << 5;
                break;
            case 'G':
            case 'g':
                cout << 6;
                break;
            case 'T':
            case 't':
                cout << 7;
                break;
            case 'B':
            case 'b':
                cout << 8;
                break;
            default:
                cout << s[i];
                break;
        }
        
    }
    
    

    return 0;
}
// le princessval template
