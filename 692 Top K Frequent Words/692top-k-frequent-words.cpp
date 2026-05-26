class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int> freq;

        for(string s : words){
            freq[s]++;
        }

        vector<pair<string,int>> nums;

        for(auto x : freq){
            nums.push_back({x.first, x.second});
        }

        sort(nums.begin(), nums.end(),
        [](pair<string,int> a, pair<string,int> b){

            if(a.second == b.second){
                return a.first < b.first;
            }

            return a.second > b.second;
        });

        vector<string> ans;

        for(int i = 0; i < k; i++){
            ans.push_back(nums[i].first);
        }

        return ans;
    }
};