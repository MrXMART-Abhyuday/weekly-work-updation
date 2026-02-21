#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements (0, 1, 2 only): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == 0)
            count0++;
        else if (nums[i] == 1)
            count1++;
        else if (nums[i] == 2)
            count2++;
    }

    int index = 0;

    while (count0--) nums[index++] = 0;
    while (count1--) nums[index++] = 1;
    while (count2--) nums[index++] = 2;

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}