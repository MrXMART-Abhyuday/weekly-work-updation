#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    string s;
    cin>>s;
    int countA=0;
    int countD=0;
    for(char c :s){
        if(c=='A') countA++;
        else countD++; 
    }
    if(countA>countD){
        cout<<"Anton";
    }
    else if(countA<countD){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}
