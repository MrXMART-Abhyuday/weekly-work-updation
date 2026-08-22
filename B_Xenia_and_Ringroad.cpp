#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long ans = 0;
    int cur = 1;

    for (int i = 0; i < m; i++) {
        int next;
        cin >> next;

        if (next >= cur)
            ans += next - cur;
        else
            ans += n - cur + next;

        cur = next;
    }

    cout << ans << endl;

    return 0;
}