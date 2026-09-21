#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int x = 0, y = 0;
        bool found = false;

        for (char c : s) {
            if (c == 'L') x--;
            else if (c == 'R') x++;
            else if (c == 'U') y++;
            else if (c == 'D') y--;

            if (x == 1 && y == 1)
                found = true;
        }

        cout << (found ? "YES" : "NO") << '\n';
    }
}