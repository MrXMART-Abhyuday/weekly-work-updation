#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> odd;
    vector<long long> even;

    for (long long i = 1; i <= n; i++) {
        if (i % 2 != 0)
            odd.push_back(i);
        else
            even.push_back(i);
    }

    if (k <= odd.size())
        cout << odd[k - 1];
    else
        cout << even[k - odd.size() - 1];

    return 0;
}