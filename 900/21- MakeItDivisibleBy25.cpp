#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s ; cin >> s ;
        int n = s.size() ;
        int minct = n ;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int val = (s[i]-'0') * 10 + (s[j]-'0') ;
                if(val%25==0){
                    minct = min(minct,n-j-1+j-i-1) ;
                }
            }
        }

        cout << minct << endl ;
    }
    return 0;
}