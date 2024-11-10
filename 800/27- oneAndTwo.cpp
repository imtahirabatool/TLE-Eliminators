#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, count = 0;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 2) count++;
        }

        if (count % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        int twoTillHere = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 2) {
                twoTillHere++;
            }
            if (twoTillHere * 2 == count) {
                cout << i + 1 << endl; 
                break; 
            }
        }
    }

    return 0;
}


// int totalProduct = 1;
// for (int i = 0; i < n; i++) {
//     totalProduct *= a[i];
// }

// int leftProduct = 1;
// bool found = false;
// for (int k = 1; k < n; k++) {
//     leftProduct *= a[k - 1];
//     int rightProduct = totalProduct / leftProduct;

//     if (leftProduct == rightProduct) {
//         cout << k << endl;
//         found = true;
//         break;
//     }
// }

// if (!found) {
//     cout << -1 << endl;
// }