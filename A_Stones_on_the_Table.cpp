#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    string stone;
    cin>>stone;
    int count=0;
    for(int i=0;i<n;i++){
        if(stone[i]==stone[i+1]) count++;
    }
    cout<<count;
    return 0;
}
