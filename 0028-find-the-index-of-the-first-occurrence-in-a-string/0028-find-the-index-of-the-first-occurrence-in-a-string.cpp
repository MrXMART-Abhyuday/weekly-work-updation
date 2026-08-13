class Solution {
public:
    int strStr(string haystack, string needle) {

        if (needle.size() > haystack.size()) {
            return -1;
        }

        int ver = needle.size();

        for (int j = 0; j <= haystack.size() - needle.size(); j++) {
            int i = 0;

            while (i < ver && haystack[j + i] == needle[i]) {
                i++;
            }

            if (i == ver) {
                return j;
            }
        }

        return -1;
    }
};