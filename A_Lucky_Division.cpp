#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    if(n%4==0 ||n%7==0) {
        cout<<"YES";
        return 0;
    }
    bool b=true;
    while (n>0) {
        int rem=n%10;
        n=n/10;
        // cout<<n<<" "<<rem;
        if(rem!=4 && rem!=7){
            b=false;    
            break;
        }
    }
    if(b==false){
        cout<<"NO";
        return 0;
    }
    else{
        cout<<"YES";
        return 0;
    }
}
