#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int mat[6][6];

    for(int i=1;i <= 5;i++){
        for(int j=1;j <= 5;j++){
            cin >> mat[i][j];
        }
    }
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (mat[i][j] == 1) {
                int ans= abs(3 - i) + abs(3 - j);
                cout<<ans;
                return 0;
            }
        }
    }
    
}
