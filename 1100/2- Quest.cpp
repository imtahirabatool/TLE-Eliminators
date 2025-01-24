#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n), b(n), pre_a(n), pre_b(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        // Calculate prefix sums and max bonuses
        pre_a[0] = a[0];
        pre_b[0] = b[0];
        
        for (int i = 1; i < n; i++) {
            pre_a[i] = a[i] + pre_a[i - 1];
            pre_b[i] = max(b[i], pre_b[i - 1]);
        }

        int ans = 0;

        // maximum points in all possible steps
        for (int i = 0; i < n && i < k; i++) {
            ans = max(ans, pre_a[i] + pre_b[i] * (k - i - 1));
        }

        cout << ans << endl;
    }
    
    return 0;
}
