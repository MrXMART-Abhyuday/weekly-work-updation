class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int ans;
        for(int i=0;i<t.size();i++){
            if (s[i]!=t[i]){
                return ans=t[i];
            }
        }   
        return t[t.size()];
    }
};