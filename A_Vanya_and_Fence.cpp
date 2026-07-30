#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int nf,height;
    cin>>nf>>height;
    vector<int> indi(nf);
    for(int i=0;i<nf;i++){
        cin>>indi[i];
    }
    int sum=0;
    for(int i=0;i<nf;i++){
        if(indi[i]>height){
            sum=sum+2;
        }
        else{
            sum=sum+1;
        }
    }
    cout<<sum;

    return 0;
}
