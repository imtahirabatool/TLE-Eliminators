#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, count=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=1; i<n; i++){
            if((a[i]%2==0 && a[i-1]%2==0)||(a[i]%2!=0 && a[i-1]%2!=0)){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}