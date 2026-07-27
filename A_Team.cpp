#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int ans=0;
    while (t--) {
        int p,v,t;
        cin>>p>>v>>t;
        int count=0;
        if(p==1){
            count++;
        }
        if(v==1){
            count++;
        }
        if(t==1){
            count++;
        }
        if(count>=2){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
