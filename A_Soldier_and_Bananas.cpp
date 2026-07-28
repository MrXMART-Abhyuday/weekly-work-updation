#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int firstcost,ihave,tobuy;
    cin>>firstcost>>ihave>>tobuy;

    int sum=0;

    for(int i=1;i<=tobuy;i++){
        sum=sum+i*firstcost;

    }
    cout<<sum-ihave;

    return 0;
}
