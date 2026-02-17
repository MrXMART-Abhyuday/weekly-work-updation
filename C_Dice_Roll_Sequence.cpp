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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
    }
        int count=0;
        for(int i=0;i<n-1;i++){
            if(a[i]+a[i+1]==7||a[i]==a[i+1]) count++;i++;
        }
        cout<<count<<endl;
   
}
 return 0;
}