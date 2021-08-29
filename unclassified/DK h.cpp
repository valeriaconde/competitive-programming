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

int arr[100005];
int minSwaps(int n)
{
    int count = 0;
    int i = 0;
    while (i < n)
    {
        if (arr[i] != i + 1)
        {
            while (arr[i] != i + 1)
            {
                int temp = 0;
                temp = arr[arr[i] - 1];
                arr[arr[i] - 1] = arr[i];
                arr[i] = temp;
                count++;
            }
        }
        i++;
    }
    return count;
}
int main() {
    int t;
    scanf("%d", &t);
    
    while(t > 0) {
        int n, k;
        scanf("%d %d", &n, &k);
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        int mini = minSwaps(n);
        if(k >= mini && (k & 1) == (mini & 1)) puts("Yes");
        else puts("No");
        
        t--;
    }

    return 0;
}
// le princessval template
