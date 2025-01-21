#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        long n, x;
        cin >> n >> x;
        
        vector<long> arr(n + 2, 0); 
        
        for (long i = 1; i <= n; i++) {
            cin >> arr[i]; 
        }
        
        arr[n + 1] = x + (x - arr[n]);
        
        long maxDiff = 0;
        
        for (long i = 1; i <= n + 1; i++) {
            long diff = arr[i] - arr[i - 1]; 
            maxDiff = max(maxDiff, diff);
        }
        
        cout << maxDiff << endl;
    }
    
    return 0;
}
