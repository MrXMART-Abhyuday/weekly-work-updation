class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> words;
        string temp = "";

        // Split string into words
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                words.push_back(temp);
                temp = "";
            }
            else {
                temp += s[i];
            }
        }
        words.push_back(temp);

        // Number of words should match pattern length
        if (words.size() != pattern.size())
            return false;

        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;

        for (int i = 0; i < pattern.size(); i++) {

            char ch = pattern[i];
            string word = words[i];

            // Character already mapped
            if (mp1.count(ch)) {
                if (mp1[ch] != word)
                    return false;
            }
            else {
                mp1[ch] = word;
            }

            // Word already mapped
            if (mp2.count(word)) {
                if (mp2[word] != ch)
                    return false;
            }
            else {
                mp2[word] = ch;
            }
        }

        return true;
    }
};