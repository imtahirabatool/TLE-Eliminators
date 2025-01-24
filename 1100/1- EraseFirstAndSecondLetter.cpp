#include <iostream>
#include <string>
#include<map>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char, int> mark;
        int result = 0;
        for (int i = 0; i < n; ++i){
            if (!mark[s[i]]){
                result += n - i, mark[s[i]] = true;
            }
        }    
        cout << result << endl;
    }
    return 0;
}