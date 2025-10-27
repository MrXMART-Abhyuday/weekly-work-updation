#include <iostream>
using namespace std;

int main() {
    int n=4;
// 1 1 1 1
//   2 2 2
//     3 3
//       4 
for(int i=0;i<n;i++){
    //spaces bhi print krwana h isme toh do inner loops lagegi
    for(int j=0;j<i;j++){
        cout<<" ";
    }
    for(int j=0;j<n-1;j++){
        cout<<i+1;
    }
    cout<<endl;
}
return 0;
}