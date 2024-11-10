#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, neg = 0, pos=0, ans=0;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            if (arr[i] == -1)
                neg++;
            else
                pos++;
        }
        
        while (!((pos - neg) >= 0 && neg % 2 == 0)) {
                neg--;
                pos++;
                ans++;
            }

        cout<<ans<<endl;
    }
    return 0;
}