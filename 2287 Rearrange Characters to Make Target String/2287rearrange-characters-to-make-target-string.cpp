class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> freqs;
        for(int i=0;i<s.size();i++){
            freqs[s[i]]++;
        }
        int ans=INT_MAX;
        // a-2
        // b-2
        // c-1  
        unordered_map<char,int> tar;
        for(int i=0;i<target.size();i++){
            tar[target[i]]++;
        }
        // a-1
        // b-1
        // c-1
    for(auto p : tar){
        ans = min(ans, freqs[p.first] / p.second);
    }
   return ans; 
   }
};