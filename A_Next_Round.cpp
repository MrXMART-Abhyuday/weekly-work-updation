#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;

    vector<int> score(n);
    for(int i=0;i<n;i++) {
        cin>>score[i];
    }
    int count=0;
    int mp=score[k-1];
    for(int i=0;i<score.size();i++){
        if(score[i]>0 && score[i]>=mp){
            count++;
        }
    }
    cout<<count;
    return 0;
}
