class Solution {
public:
    string reversePrefix(string word, char ch) {
        int r=0;
        while(r<word.size()){
            if(word[r]==ch){
                reverse(word.begin(), word.begin() + r + 1);
                break;
            }
            else{
                r++;
            }
        }
    return word;
    }
};