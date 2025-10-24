#include <iostream>
using namespace std;

int main() {
    int n=4;
// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
    for(int i=0;i<n;i++){
        int x=1; 
        for(int j=0;j<n;j++){
            cout<< x<<" " ;
            x++;
        }
        cout<<endl;
    }  
// * * * *
// * * * *
// * * * *
// * * * *  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< '*'<<" " ;
            
        }
        cout<<endl;
    }
// A B C D 
// A B C D
// A B C D
// A B C D
    for(int i=0;i<n;i++){
        char x='A';
        for(int j=0;j<n;j++){
            cout<< x <<" " ;
            x++;
        }
        cout<<endl;
    }

// 1 2 3 4
// 5 6 7 8 
// 9 10 11 12
// 13 14 15 16
    int p=1;
    for(int i=0;i<n;i++){
         
        for(int j=0;j<n;j++){
            cout<< p <<" " ;
            p++;
        }
        cout<<endl;
    }
    return 0;

}