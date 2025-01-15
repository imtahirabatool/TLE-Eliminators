#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) {
            cin >> x;
        }
        
        bool found = false;
        for (int i = 0; i < n && !found; ++i) {
            for (int j = i + 1; j < n && !found; ++j) {
                if (gcd(a[i], a[j]) <= 2) {
                    found = true;
                }
            }
        }
        cout << (found ? "Yes" : "No") << endl;
    }
    return 0;
}