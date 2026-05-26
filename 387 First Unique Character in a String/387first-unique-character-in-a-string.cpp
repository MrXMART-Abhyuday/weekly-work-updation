class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char,int> freq;
        char character;

        for(char ch:s){
            freq[ch]++;
        }
        for(char x:s){
            if(freq[x]==1) {
                character=x;
                break;
            }
        }

        int count;
        for(int i=0;i<s.size();i++){
            if(s[i]==character){
                count=i;
                return count;
                }
            }
    return -1;
    }
};