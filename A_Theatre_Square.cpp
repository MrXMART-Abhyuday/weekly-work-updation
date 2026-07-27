#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m, a;
    cin >> n >> m >> a;

    long long rows = n / a;
    if (n % a != 0) {
        rows++;
    }

    long long cols = m / a;
    if (m % a != 0) {
        cols++;
    }

    cout << rows * cols;

    return 0;
}