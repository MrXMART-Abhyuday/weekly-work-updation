#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n,0);
        for(int i=0;i<n;i++) cin>>v[i];
        bool flag1=false;
       
        for(int i=0;i<n;i++){
            if(v[i]==67) flag1=true;
            
        }
        if(flag1==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}