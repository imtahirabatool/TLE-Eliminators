#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int n, sm = INT_MAX;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
        if (abs(A[i]) < abs(sm)) {
            sm = A[i];
        } else if (abs(A[i]) == abs(sm) && A[i] > sm) {
            sm = A[i];
        }
    }

    cout << abs(sm) << endl; 
    return 0;
}
