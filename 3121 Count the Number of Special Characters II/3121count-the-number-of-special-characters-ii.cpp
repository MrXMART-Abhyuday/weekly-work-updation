class Solution {
public:
    int numberOfSpecialChars(string word) {

        unordered_map<char,int> lower;
        unordered_map<char,int> upper;

        int count=0;

        for(int i=0;i<word.size();i++){

            if(word[i]>='a' && word[i]<='z'){
                lower[word[i]]=i;
            }

            else if(word[i]>='A' && word[i]<='Z'){

                if(upper.find(word[i])==upper.end()){
                    upper[word[i]]=i;
                }
            }
        }
        for(char c='a';c<='z';c++){

            if(lower.find(c)!=lower.end() &&
               upper.find(c-32)!=upper.end() &&
               lower[c] < upper[c-32]){
                count++;
            }
        }
        return count;
    }
};