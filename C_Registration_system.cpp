#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> mp;

    while (n--) {
        string s;
        cin >> s;

        if (mp.find(s) == mp.end()) {
            cout << "OK" << endl;
            mp[s] = 1;
        }
        else {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }

    return 0;
}