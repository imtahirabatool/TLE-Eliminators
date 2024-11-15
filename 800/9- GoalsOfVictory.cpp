#include<iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n - 1; i++) {
        int temp;
        cin >> temp;
        sum += temp;
    }

    cout << -(sum) << endl;
}

int main(){
    int T = 1;
    cin >> T;
    while (T--)  {
        solve();
    }
}