#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int countsmall = 0;
    for (char c : s) {
        if (islower(c))
            countsmall++;
    }
    if (countsmall == 0) {
        for (char &c : s)
            c = tolower(c);
    }
    else if (countsmall == 1 && islower(s[0])) {
        for (char &c : s)
            c = tolower(c);

        s[0] = toupper(s[0]);
    }

    cout << s;

    return 0;
}