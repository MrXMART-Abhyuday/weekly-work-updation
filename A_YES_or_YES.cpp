#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        for (char &c : s)
            c = toupper(c);

        if (s == "YES")
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}