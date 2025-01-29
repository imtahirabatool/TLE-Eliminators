#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, k, result = 1;
        cin >> n >> k;

        // Compute (n^k) % MOD using iterative multiplication
        for (int i = 0; i < k; i++) {
            result = (result * n) % MOD;
        }

        cout << result <<endl;
    }

    return 0;
}