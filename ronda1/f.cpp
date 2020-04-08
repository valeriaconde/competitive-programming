

#include <iostream>
#include <cmath>

// A B C D E F G H I J  K  L   M  N  O P  Q   R  S T U V W X Y Z
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
using namespace std;

int main() {
    string s;
    cin >> s;
    
    if (s[0] % 2 == 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    
    
    return 0;
}
