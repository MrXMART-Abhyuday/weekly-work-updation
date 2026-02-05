#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr1[n];   
    int arr2[m];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int k = 0;
for (int i = 0; i < n && k < m; i++) {
    if (arr1[i] == 0) {
        arr1[i] = arr2[k];
        k++;
    }
}
sort(arr1, arr1 + n);


    sort(arr1, arr1 + n);

    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}
