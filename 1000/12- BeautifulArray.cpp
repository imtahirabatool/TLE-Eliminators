#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n, k, b, s;
        cin >> n >> k >> b >> s;

        // Calculate the minimum and maximum possible values for b
        ll min_b = (s - (n - 1) * (k - 1)) / k;
        ll max_b = s / k;

        // Check if b is within the valid range
        if (b < min_b || b > max_b) {
            cout << "-1" << endl;
            continue;
        }

        ll first_element = b * k + (k - 1);
        if (first_element > s) {
            first_element = s;
        }
        cout << first_element << " ";

        ll remaining_sum = s - first_element;

        // Distribute the remaining sum among the remaining (n-1) elements
        for (ll p = 1; p < n; p++) {
            ll next_element = min(remaining_sum, k - 1);
            remaining_sum -= next_element;
            cout << next_element << " ";
        }
        cout << endl;
    }
    return 0;
}