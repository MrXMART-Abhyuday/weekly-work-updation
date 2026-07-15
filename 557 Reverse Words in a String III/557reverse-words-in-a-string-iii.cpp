class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int j = 0;
        int rem = 0;
        bool rev = false;

        while (j <= s.size()) {

            if (!rev && (j == s.size() || (i != j && s[j] == ' '))) {
                rem = j;
                j--;
                rev = true;
            }
            else if (rev) {
                if (i < j) {
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }
                else {
                    rev = false;
                    j = rem + 1;
                    i = j;
                }
            }
            else {
                j++;
            }
        }

        return s;
    }
};