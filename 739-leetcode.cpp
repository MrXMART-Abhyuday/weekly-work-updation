#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int temp[n];
    int output[n];

    for(int i = 0; i < n; i++){
        cin >> temp[i];
        output[i] = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(temp[j] > temp[i]){
                output[i] = j - i;
                break;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << output[i] << " ";
    }

    return 0;
}
