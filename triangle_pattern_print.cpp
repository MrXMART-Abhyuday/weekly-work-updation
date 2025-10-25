#include <iostream>
using namespace std;

int main() {
    int n=4;
    int x=1; 
//* 
// * *
// * * *
// * * * *
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<< '*'<< " " ;
        }
        cout<<endl;
    }
cout<<endl;
// 1
// 1 2
// 1 2 3
// 1 2 3 4
    for(int i=0;i<n;i++){
        int x=1; 
        for(int j=0;j<i+1;j++){
            cout<< x << " " ;
            x++;  
        }
        cout<<endl;
    }
cout<<endl;
// A
// B B
// C C C
// D D D D
char y='@';
 for(int i=0;i<n;i++){
    y=y+1;
        for(int j=0;j<i+1;j++){
            cout<<y<<" ";
        }
        cout<<endl;
        
    }
cout<<endl;
// 1
// 2 2
// 3 3 3 
// 4 4 4 4
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            x=i+1;
            cout<<x<<" ";
        }
        cout<<endl;
    }
cout<<endl;

// 1
// 1 2
// 1 2 3
// 1 2 3 4
    int p=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<p<<" ";
            p=++p;
        }
        cout<<endl;
    }
    return 0;
}