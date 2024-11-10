#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int diff=INT_MAX;
        for(int i=1; i<n; i++){
            diff=min(diff, arr[i]-arr[i-1]);
        }
        if(diff<0){
            cout<<0<<endl;
        }else{
            cout<<diff/2+1<<endl;
        }
    }
    
    return 0;
}
