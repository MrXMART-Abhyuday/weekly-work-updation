#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    string a="codeforces";
    while (t--) {
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=s[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
