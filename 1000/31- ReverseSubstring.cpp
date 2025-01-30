#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    long long k;
    string s;

    while (cin >> k >> s) {
        int index = -1;
        int n = s.size();

        for (int i = 0; i < n - 1; i++) {
            if (s[i] > s[i + 1]) {
                index = i + 1;
                break;
            }
        }

        if (index != -1) {
            cout << "YES" << endl;
            cout << index << " " << index + 1 << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
