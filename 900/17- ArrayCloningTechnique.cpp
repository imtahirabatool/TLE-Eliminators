#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        unordered_map<int, int>freq;
        for(int i=0; i<n; i++){
            cin>>a[i];
            freq[a[i]]++;
        }
        int max_freq=0, most_freq;
        for(auto &[num, count]:freq){
            if(count>max_freq){
                max_freq=count;
                most_freq=num;;
            }
        }
        int operations = 0, cnt_x = max_freq;

        while (cnt_x < n) {
            int new_elements = min(cnt_x, n - cnt_x);
            cnt_x += new_elements;
            operations++;
        }
        operations += (n - max_freq); 
        cout << operations << endl;
    }
    return 0;
}