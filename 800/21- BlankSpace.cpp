#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int maxLen=0, currLen=0;

        for(int i:a){
            if(i==0){
                currLen++;
                maxLen=max(maxLen,currLen);
            }else{
                currLen=0;
            }
        }
        cout<<maxLen<<endl;
    }
    return 0;
}