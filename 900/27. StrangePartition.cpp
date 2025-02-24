#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        
        long long totalSum = 0;
        long long minBeauty = 0, maxBeauty = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            totalSum += arr[i];
            minBeauty += (arr[i] + x - 1) / x; 
        }

        maxBeauty = (totalSum + x - 1) / x; 
        cout << maxBeauty << " " << minBeauty << endl;
    }
    return 0;
}