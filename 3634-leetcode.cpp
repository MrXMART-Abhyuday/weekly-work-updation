#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k;
    cin >> k;

    sort(nums, nums + n);

    int left = 0;
    int maxKeep = 1;   

    for (int right = 0; right < n; right++) {
        while (nums[right] > nums[left] * k) {
            left++;
        }

        int currentSize = right - left + 1;
        if (currentSize > maxKeep) {
            maxKeep = currentSize;
        }
    }

    int result = n - maxKeep;
    cout << result << endl;

    return 0;
}
