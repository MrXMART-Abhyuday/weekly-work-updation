class Solution {
public:
    int maxDistinct(string s) {
        int hash[26] = {0};
        for (char c : s) {
            hash[c - 'a'] = 1;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(hash[i]==1){
                count++;
            }
        }
    return count;
    }
};