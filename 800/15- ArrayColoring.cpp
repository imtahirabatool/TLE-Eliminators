#include<iostream>
#include<vector>
using namespace std;

 int main(){
    int t;
    cin>>t;

    while(t--){
        int n, sum=0;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%2){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}