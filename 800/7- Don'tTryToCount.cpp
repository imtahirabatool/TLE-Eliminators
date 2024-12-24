#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int count=-1;
        for(int i=0; i<6; i++){ // because n.m<=25
            if(x.find(s)!=string::npos){ // tp check whether s exits in x or not?
                count=i;
                break;
            }
            x+=x;
        }
        cout<<count<<endl;
    }
    return 0;
}

//  SOL-1
        // string con_str = x;
        // int count = 0 ;     
        
        // // Keep concatenating until s appears in the string
        // while (con_str.find(s) == string::npos) {
        //     con_str += x;
        //     count++;

        //     // If the length of con_str exceeds the necessary limit, s cannot be formed
        //     if (con_str.size() > s.size() + x.size() * 2) {
        //         count = -1;
        //         break;
        //     }
        // }
        // cout << count << endl;