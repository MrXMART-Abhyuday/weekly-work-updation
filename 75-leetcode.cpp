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

    int l = 0;
    int m = 0;
    int h = n - 1;

    while (m <= h) {
        if (nums[m] == 0) {
            swap(nums[l], nums[m]);
            l++;
            m++;
        }
        else if (nums[m] == 2) {
            swap(nums[m], nums[h]);
            h--;
        }
        else {   // nums[m] == 1
            m++;
        }
    }

    cout << "Sorted array: ";
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}