#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        // split point
        vector<int> b, c;
        bool split_found = false;
        for (int i = 0; i < n - 1; i++) {
            b.push_back(a[i]);
            if (a[i] != a[i + 1]) {
                c.insert(c.end(), a.begin() + i + 1, a.end());
                split_found = true;
                break;
            }
        }
        
        if (!split_found || b.empty() || c.empty()) {
            cout << "-1" << endl;
        } else {
            cout << b.size() << " " << c.size() << endl;
            for (int x : b) cout << x << " ";
            cout << endl;
            for (int x : c) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}
