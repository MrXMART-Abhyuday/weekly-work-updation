#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int count=0;
    while (n>0) {
        int rem=n%10;
        n=n/10;
        if(rem==4 || rem==7){
            count++;
        }
    }
    if(count==4 || count==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
