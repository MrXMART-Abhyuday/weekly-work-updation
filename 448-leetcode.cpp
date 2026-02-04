#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    int arr[n];
    int present[n] = {0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   

    for (int i = 0; i < n; i++) {
        int index = arr[i] - 1;
        if (present[index] == 0) {
            present[index] = 1;
        }
        // else duplicate → skip;
    }
    cout << "Missing numbers: ";
    for (int i = 0; i < n; i++) {
        if (present[i] == 0) {
            cout << i + 1 << " ";
        }
    }

    return 0;
}
