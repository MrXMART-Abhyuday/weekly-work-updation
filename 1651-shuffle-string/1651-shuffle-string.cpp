class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector <char>ans(s.size());
        for(int i=0;i<indices.size();i++){
            ans[indices[i]]=s[i];
        }
    string p(ans.begin(), ans.end());
    return p;}
};