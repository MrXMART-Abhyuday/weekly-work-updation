#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        string trial = "";

        for (int i=0;i<n;i++) {
            if (s[i]=='0') {
                string a =s.substr(0, i) + s.substr(i + 1);

                int idx = -1;
                for (int j=0;j<(int)a.size()-1;j++) {
                    if (a[j] == '1' && a[j + 1] == '0') {
                        idx = j;
                        break;
                    }
                }

                if (idx == -1) {
                    for (int j=a.size()-1;j>=0;j--) {
                        if (a[j]=='1') {
                            idx=j;
                            break;
                        }
                    }
                }

                string finalStr=a.substr(0, idx)+a.substr(idx+1);

                if (trial=="" || finalStr> trial) {
                    trial= finalStr;
                }
            }
        }
        cout << trial << "\n";
    }
    return 0;
}