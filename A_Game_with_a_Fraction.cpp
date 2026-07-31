#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long p, q;
        cin >> p >> q;

        if (p < q && 2 * (q - p) <= p)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }

    return 0;
}