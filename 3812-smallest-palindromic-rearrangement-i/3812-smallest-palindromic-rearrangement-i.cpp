class Solution {
public:
    string smallestPalindrome(string s) {

        int freq[26] = {0};

        // Count frequency of each character
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }

        string first = "";
        string middle = "";

        // Build first half and middle
        for (int i = 0; i < 26; i++) {

            // Add half of the characters
            for (int j = 0; j < freq[i] / 2; j++) {
                first += char('a' + i);
            }

            // If frequency is odd, this character goes in the middle
            if (freq[i] % 2 == 1) {
                middle += char('a' + i);
            }
        }

        // Make second half by reversing first half
        string second = "";

        for (int i = first.size() - 1; i >= 0; i--) {
            second += first[i];
        }

        return first + middle + second;
    }
};