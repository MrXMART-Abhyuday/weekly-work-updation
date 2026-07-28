#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    vector<char> digit;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){
            digit.push_back(s[i]);
        }
    }
    sort(digit.begin(),digit.end());
    string ans="";
    for(int i=0;i<digit.size();i++){
        ans=ans+digit[i];
        ans=ans+"+";
    }
    ans.pop_back();
    cout<<ans;
    return 0;
}
