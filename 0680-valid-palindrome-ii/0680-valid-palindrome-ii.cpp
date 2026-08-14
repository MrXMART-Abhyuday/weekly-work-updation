class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {

            if (s[i] == s[j]) {
                i++;
                j--;
            }
            else {
                // Option 1: skip left character
                int left = i + 1;
                int right = j;

                while (left < right && s[left] == s[right]) {
                    left++;
                    right--;
                }

                if (left >= right)
                    return true;

                // Option 2: skip right character
                left = i;
                right = j - 1;

                while (left < right && s[left] == s[right]) {
                    left++;
                    right--;
                }

                if (left >= right)
                    return true;

                return false;
            }
        }

        return true;
    }
};