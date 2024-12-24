#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int arrXOR = 0;
        for (int i = 0; i < n; i++){
            arrXOR = arrXOR xor arr[i];
        }
        if (n % 2 == 0){
            if (arrXOR == 0) {
                cout << 7 << endl;
            }
            else {
                cout << -1 << endl;
            }
        }
        else{
            cout << arrXOR << endl;
        }
    }
    return 0;
}