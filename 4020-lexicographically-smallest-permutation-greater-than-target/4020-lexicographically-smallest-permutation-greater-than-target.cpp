class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.size();

        int cnt[26] = {};

        for (char c : s)
            cnt[c - 'a']++;

        // temp = remaining characters while trying to match target
        int temp[26];
        for (int i = 0; i < 26; i++)
            temp[i] = cnt[i];

        int pos = -1;

        for (int i = 0; i < n; i++) {
            int x = target[i] - 'a';

            // Find the smallest available character > target[i]
            for (int c = x + 1; c < 26; c++) {
                if (temp[c] > 0) {
                    pos = i;
                    break;
                }
            }

            // Can't even match target[i]
            if (temp[x] == 0)
                break;

            temp[x]--;
        }

        // No position where we can make it greater
        if (pos == -1)
            return "";

        string ans;

        // Use target[0 ... pos-1]
        for (int i = 0; i < pos; i++) {
            ans += target[i];
            cnt[target[i] - 'a']--;
        }

        // At pos, choose the smallest character > target[pos]
        int x = target[pos] - 'a';

        for (int c = x + 1; c < 26; c++) {
            if (cnt[c] > 0) {
                ans += char('a' + c);
                cnt[c]--;
                break;
            }
        }

        // Put all remaining characters in sorted order
        for (int c = 0; c < 26; c++) {
            while (cnt[c] > 0) {
                ans += char('a' + c);
                cnt[c]--;
            }
        }

        return ans;
    }
};