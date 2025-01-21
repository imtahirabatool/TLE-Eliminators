#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int>arr(n);
        bool occur=false;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==k){
                occur=true;
            }
        }
        if(occur==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}