#include<iostream>
using namespace std;

int main(){
    int count=0;
    int arr[9];
    int present[9] = {0};
    for(int i=0;i<9;i++){
        cin>>arr[i];
    }   

    for (int i = 0; i < 9; i++) {
        int index = arr[i] - 1;
        if (present[index] == 0) {
            present[index] = 1;
        }
        // else duplicate → skip;
    }
    cout << "Missing numbers: ";
    for (int i = 0; i < 9; i++) {
        if (present[i] == 0) {
            cout << i + 1 << " ";
        }
    }
    return 0;
}
