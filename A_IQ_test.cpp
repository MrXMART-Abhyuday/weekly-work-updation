#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int even=0;
    int odd=0;
    vector<int> exp(n,0);
    for(int i=0;i<n;i++){
        cin>>exp[i];
        if(exp[i]%2==0) even++;
        else odd++;
    }
    if(odd>even){
        for(int i=0;i<exp.size();i++){
            if(exp[i]%2==0){
                cout<<i+1;
                return 0;
            }
        }
    }
    if(even>odd){
       for(int i=0;i<exp.size();i++){
            if(exp[i]%2!=0){
                cout<<i+1;
                return 0;
            }
        } 
    }
}
