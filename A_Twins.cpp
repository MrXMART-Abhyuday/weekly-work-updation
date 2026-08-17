#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<int> coin(t);
    int i=0;
    while (t--) {
        cin>>coin[i];
        i++;
    }
    sort(coin.begin(),coin.end());

    int mySum = 0;
    int count = 0;
    int total = 0;
    for (int x : coin) total += x;
    for (int i = coin.size() - 1; i >= 0; i--) {
        mySum += coin[i];
        count++;

        if (mySum > total - mySum)
            break;
    }
    cout<<count;
    return 0;
}
