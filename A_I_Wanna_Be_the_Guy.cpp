#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int level;
    cin >> level;

    int p;
    cin >> p;

    vector<int> pl(p);

    for(int i = 0; i < p; i++) {
        cin >> pl[i];
    }

    int q;
    cin >> q;

    vector<int> ql(q);

    for(int i = 0; i < q; i++) {
        cin >> ql[i];
    }

    vector<int> combo;

    for(int i = 0; i < p; i++) {
        combo.push_back(pl[i]);
    }

    for(int i = 0; i < q; i++) {
        combo.push_back(ql[i]);
    }

    sort(combo.begin(), combo.end());

    combo.erase(unique(combo.begin(), combo.end()), combo.end());

    if(combo.size() != level) {
        cout << "Oh, my keyboard!";
        return 0;
    }

    for(int i = 0; i < level; i++) {
        if(combo[i] != i + 1) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";

    return 0;
}