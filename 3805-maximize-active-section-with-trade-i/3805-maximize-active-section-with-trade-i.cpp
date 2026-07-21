class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int ones = 0;
        int prevZero = -1000000;
        int maxGain = 0;

        int i = 0;

        while (i < s.size()) {

            int j = i;

            while (j < s.size() && s[j] == s[i]) {
                j++;
            }

            int len = j - i;

            if (s[i] == '1') {
                ones += len;
            }
            else {
                if (prevZero != -1000000) {
                    maxGain = max(maxGain, prevZero + len);
                }
                prevZero = len;
            }

            i = j;
        }

        return ones + maxGain;
    }
};