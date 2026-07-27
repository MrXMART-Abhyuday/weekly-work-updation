#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;

    unordered_set<char>freq;
    for(int i=0;i<s.size();i++){
        freq.insert(s[i]);
    }
    if(freq.size()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}
