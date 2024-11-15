#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            cout << (n + 1) - temp << " "; 
        }   
        cout<<endl;
    }
    return 0;
}