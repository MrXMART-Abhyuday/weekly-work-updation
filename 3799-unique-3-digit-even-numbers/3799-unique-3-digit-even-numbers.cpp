class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10] = {};
        //////BASIC PERMUTATION MATHS WALA USE KR RHE H. IT IS NOT THAT HARD
        for (int d : digits)
            freq[d]++;

        int ans = 0;

        // Choose the last digit (must be even)
        for (int last = 0; last <= 8; last += 2) {
            if (freq[last] == 0)
                continue;

            freq[last]--;

            // Choose the first digit (cannot be 0)
            for (int first = 1; first <= 9; first++) {
                if (freq[first] == 0)
                    continue;

                freq[first]--;

                // Choose the middle digit
                for (int middle = 0; middle <= 9; middle++) {
                    if (freq[middle] > 0)
                        ans++;
                }

                freq[first]++;
            }

            freq[last]++;
        }

        return ans;
    }
};