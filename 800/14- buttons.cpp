#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        // Adjust `a` if `c` is odd
        if (c % 2 != 0) {
            a++;
        }
        
        // Determine the winner based on the adjusted values
        if (a > b) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }
    return 0;
}
