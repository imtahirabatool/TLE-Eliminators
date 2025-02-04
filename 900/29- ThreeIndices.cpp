#include<iostream>
#include<vector>
typedef long long int ll;
using namespace std;

void solve_array() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (ll i = 1; i < n - 1; i++) {
        if (arr[i] - arr[i + 1] > 0 && arr[i] - arr[i - 1] > 0) {
            cout << "YES" << endl;
            cout << i << " " << i + 1 << " " << i + 2 << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    ll test;
    cin >> test;
    for (ll i = 0; i < test; i++) {
        solve_array();
    }

    return 0;
}