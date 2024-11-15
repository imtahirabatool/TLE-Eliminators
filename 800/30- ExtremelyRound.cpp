#include<iostream>
using namespace std;
 
void solve() {
    long long n, c = 0;
    cin >> n;
    long long t = n;
    while (t > 9) {
        t /= 10;
        c++;
    }
    cout << c * 10 + t - c << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unsigned int t;
    cin >> t;
    for (int z = 0; z < t; z++) {
        solve();
    }
    return 0;
}