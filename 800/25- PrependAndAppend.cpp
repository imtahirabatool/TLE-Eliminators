#include<iostream>
#include<string>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int siz;
        cin>>siz;
        string s;
        cin>>s;

        int left=0, right=s.length()-1;
        while(left<right){
            if((s[left]=='0' && s[right]=='1') || (s[right]=='0' && s[left]=='1')){
                siz-=2;
                left++;
                right--;
            }else{
                break;
            }
        }
        cout<<siz<<endl;
    }
    return 0;
} 