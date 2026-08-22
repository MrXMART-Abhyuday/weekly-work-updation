#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l;//n=number of lantern l=length of street
    cin>>n>>l;
    vector<int> lantern(n);
    int i=0;
    while (n--) {
        cin>>lantern[i];
        i++;
    }
        sort(lantern.begin(), lantern.end());

    double ans = 0;

    ans = max(ans, (double)lantern[0]);
    ans = max(ans, (double)(l - lantern[lantern.size() - 1]));

    for (int i = 1; i < lantern.size(); i++) {
        double gap = (lantern[i] - lantern[i - 1]) / 2.0;
        ans = max(ans, gap);
    }

    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}
