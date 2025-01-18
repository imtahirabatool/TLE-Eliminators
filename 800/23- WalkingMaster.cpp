#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;

        int p=d-b;
        int q=(a+p)-c;
        if(p<0 || q<0){
            cout<<-1<<endl;
        }else{
            cout<<p+q<<endl;
        }
    }
    return 0;
}