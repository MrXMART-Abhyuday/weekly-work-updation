#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int t;
    cin>>t;

    while(t--){
        int rem=n%10;
        if(rem==0){
            n=n/10;
        }
        if(rem!=0){
            n=n-1;
        }
    }
    cout<<n;
    return 0;
}
