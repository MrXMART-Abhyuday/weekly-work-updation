#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[1000];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int x = a[i];
                int y = a[j];

                for (int k = 0; k < 100; k++) {

                    int sum1 = 0;
                    while (x > 0) {
                        int digit = x % 10;
                        sum1 += digit * digit;
                        x /= 10;
                    }

                    int sum2 = 0;
                    while (y > 0) {
                        int digit = y % 10;
                        sum2 += digit * digit;
                        y /= 10;
                    }

                    x = sum1;
                    y = sum2;

                    if (x == y) {
                        ans++;
                        break;
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}