class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums,
                                       vector<vector<int>>& queries) {

        vector<int> ans;
        for (int q=0;q<queries.size();q++) {
            int k=queries[q][0];
            int trim=queries[q][1];
            vector<pair<string,int>> v;
            for (int i=0;i<nums.size();i++) {
                string trimmed = nums[i].substr(nums[i].size() - trim);
                v.push_back(make_pair(trimmed,i));
            }
            sort(v.begin(),v.end());
            ans.push_back(v[k-1].second);
        }
        return ans;
    }
};