#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]='1'){
            count++;
            if(count==7){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";


    return 0;
}
