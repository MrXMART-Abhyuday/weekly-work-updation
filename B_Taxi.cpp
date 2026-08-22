#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> taxi(n);
    for (int i=0;i<n;i++) {
        cin>>taxi[i];
    }
    int ones=0,twos=0,threes=0,quads=0;
    for(int i=0;i<n;i++){
        if(taxi[i]==1){
            ones++;
        }
        if(taxi[i]==2){
            twos++;
        }
        if(taxi[i]==3){
            threes++;
        }
        if(taxi[i]==4){
            quads++;
        }
    }
    int ans = 0;

    ans = ans + quads;

    int x = min(threes, ones);

    ans = ans + x;
    threes = threes - x;
    ones = ones - x;

    ans = ans + threes;

    ans = ans + twos / 2;
    twos = twos % 2;
    if (twos == 1) {
        ans = ans + 1;

        if (ones >= 2) {
            ones = ones - 2;
        }
        else {
            ones = 0;
        }
    }
    ans = ans + (ones + 3) / 4;

    cout << ans << endl;


    return 0;
}
