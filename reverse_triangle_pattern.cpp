#include <iostream>
using namespace std;

int main() {
    int n=4;
     
// 1
// 2 1
// 3 2 1
// 4 3 2 1
for (int i=0;i<n;i++){
    for(int j=i+1;j>0;j--){//revrse mai > ye sign use hota 
        cout<<j<<" ";
    }
    cout<<endl;
}
cout<< endl;

// A
// B A
// C B A
// D C B A
for (int i=0;i<n;i++){
    char y='A'+i;
    for(int j=0;j<1+i;j++){//revrse mai > ye sign use hota 
        cout<<y--<<" ";
    }
    cout<<endl;
}
cout<< endl;

// 1
// 2 3
// 4 5 6
// 7 8 9 10

// Floyds triangle pattern

int x=1;
for (int i=0;i<n;i++){
    
    for(int j=0;j<i+1;j++){//using forward loop
        cout<<x<<" ";
        x++;     
    }
    cout<<endl;
}
cout<<endl;

int num=1;
for (int i=0;i<n;i++){
    for(int j=i+1;j>0;j--){//using backward loop
        cout<<num<<" ";
        num++;
    }
    cout<<endl;
}
cout<< endl;
return 0;
}