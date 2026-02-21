#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "Maximum Gap: 0";
        return 0;
    }

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int diff = 0;
    int diff2 = 0;
    for (int i = 0; i < n - 1; i++) {
        diff2 = nums[i + 1] - nums[i];
        if (diff2 > diff) {
            diff = diff2;
        }
    }
    cout << "Maximum Gap: " << diff;

    return 0;
}