#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int one = 0, zero = 0;
        string s;
        cin>>s;
        int n = s.length();
        for(int i=0; i<n; i++){
            if(s[i] == '1')one++;
            else zero++;
        }
        int turn = min(zero,one);
        if(turn == 0 || turn%2 == 0){
            cout<<"NET"<<endl;
        }
        else
            cout<<"DA"<<endl;
    
    }
    return 0;
}