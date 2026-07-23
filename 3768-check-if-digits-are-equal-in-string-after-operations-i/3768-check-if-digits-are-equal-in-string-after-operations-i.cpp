class Solution {
public:
    bool hasSameDigits(string s) {

        while (s.size() > 2) {

            string ans = "";
            int i = 0;
            int j = 1;

            for (int k = 0; k < s.size() - 1; k++) {
                int digit = ((s[i] - '0') + (s[j] - '0')) % 10;
                ans += digit + '0';
                i++;
                j++;
            }
            s = ans;
        }
        return s[0] == s[1];
    }
};