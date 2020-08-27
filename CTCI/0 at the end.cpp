#include <iostream>
#include <vector>
using namespace std;

// move zeros to the end
int main(){
    vector<int> ar;
    
    for(int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        ar.push_back(x);
    }
    
    
    int i = 0, j = 0;
    while(i < ar.size() && j < ar.size()) {
        if (ar[i] == 0) {
            while (j < ar.size() && ar[j] == 0) {
                j++;
            }
            swap(ar[i], ar[j]);
        } else {
            i++;
            j++;
        }
    }
    
    for(int i = 0; i < 5; i++) {
        cout<< ar[i] << " ";
    }
    cout << endl;
    
    
    
    return 0;
}
  
