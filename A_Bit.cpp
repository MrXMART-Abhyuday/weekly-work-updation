#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int X=0;
    while (t--) {
        string op;
        cin>>op;
        if(op=="++X" || op=="X++"){
            X=X+1;
        }
        if(op=="--X" || op=="X--"){
            X=X-1;
        }

    }
    cout<< X;
    return 0;
}
