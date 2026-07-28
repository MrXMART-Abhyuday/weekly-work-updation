#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int count=0;
    while(a<=b){
        a=a*3;
        b=b*2;
        count++;
    }  
    cout<<count;
    return 0;
}
