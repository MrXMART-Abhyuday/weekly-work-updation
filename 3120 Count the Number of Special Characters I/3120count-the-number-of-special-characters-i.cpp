class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map <char,int> ascimap;
        int count=0;
        for(int i=0;i<word.size();i++){
            ascimap[word[i]]=int(word[i]);
        }
        for(int i=65;i<122;i++){
            if(ascimap.find((char)i) != ascimap.end() && ascimap.find((char)(i+32)) != ascimap.end()){
                count++;
            }
        }
    return count;
    }
};