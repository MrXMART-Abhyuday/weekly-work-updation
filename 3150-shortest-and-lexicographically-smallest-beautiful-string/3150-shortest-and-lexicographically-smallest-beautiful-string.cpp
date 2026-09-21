class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left = 0;
        int ones = 0;

        string ans = "";
        int bestLen = INT_MAX;

        for (int right = 0; right < s.size(); right++) {

            if (s[right] == '1')
                ones++;

            // Too many 1s â move left
            while (ones > k) {
                if (s[left] == '1')
                    ones--;
                left++;
            }

            // Remove leading zeros
            while (ones == k && s[left] == '0') {
                left++;
            }

            // We have exactly k ones
            if (ones == k) {
                string curr = s.substr(left, right - left + 1);

                if (curr.length() < bestLen ||
                    (curr.length() == bestLen && curr < ans)) {
                    
                    ans = curr;
                    bestLen = curr.length();
                }
            }
        }

        return ans;
    }
};