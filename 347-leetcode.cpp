#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;

    cout << "Enter number of elements: ";
    cin >> n;

    int nums[1000];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter k: ";
    cin >> k;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
    }

    int result[1000];
    for (int i = 0; i < k; i++) {
        int maxFreq = 0;
        int maxNum = 0;

        for (auto it : freq) {
            if (it.second > maxFreq) {
                maxFreq = it.second;
                maxNum = it.first;
            }
        }

        result[i] = maxNum;

        freq[maxNum] = 0;
    }

    // Output
    cout << "Top " << k << " frequent elements: ";
    for (int i = 0; i < k; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
