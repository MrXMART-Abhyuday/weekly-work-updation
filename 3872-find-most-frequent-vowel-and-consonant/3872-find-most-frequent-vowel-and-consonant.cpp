class Solution {
public:
    int maxFreqSum(string s) {
        int hash[26] = {0};

        for (char c : s) {
            hash[c - 'a']++;
        }

        int maxVowel = 0;
        int maxConsonant = 0;

        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;

            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                maxVowel = max(maxVowel, hash[i]);
            else
                maxConsonant = max(maxConsonant, hash[i]);
        }

        return maxVowel + maxConsonant;
    }
};