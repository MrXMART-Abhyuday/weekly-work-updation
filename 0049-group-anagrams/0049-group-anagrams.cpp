class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            string copy=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(copy);
        }
        vector<vector<string>> ans;
        for(auto t:mp){
            ans.push_back(t.second);
        }
    return ans;
    }
};