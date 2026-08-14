class Solution {
public:
    string greatestLetter(string s) {
        bool upper[26] = {false};
        bool lower[26] = {false};
        for(char c : s) {
            if(c >= 'A' && c <= 'Z')
                upper[c - 'A'] = true;
            else
                lower[c - 'a'] = true;
        }
        for(int j=25;j>=0;j--){
            if(upper[j]==true&&lower[j]==true){
                return string(1, char(j + 'A'));
            }
        }
    return "";
    }
};