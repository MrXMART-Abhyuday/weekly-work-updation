#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    int small=0;
    int caps =0;
    for(char c:s){
        if (isupper(c)) caps++;
        if (islower(c)) small++;
    }
    for(int i=0;i<s.size();i++){
        if(caps>small){
            transform(s.begin(), s.end(), s.begin(), ::toupper);
        }
        else{
            transform(s.begin(), s.end(), s.begin(), ::tolower);
        }
    }
    cout<<s;
    return 0;
}
