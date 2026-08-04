class Solution {
public:
    int minimumDistance(vector<int>& nums) {

        unordered_map<int, vector<int>> mp;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }

        int ans = INT_MAX;

        for(auto x : mp) {

            vector<int> ind = x.second;

            if(ind.size() >= 3) {

                for(int i = 0; i < ind.size() - 2; i++) {

                    int a = ind[i];
                    int b = ind[i + 1];
                    int c = ind[i + 2];

                    int dist = abs(a - b)
                             + abs(b - c)
                             + abs(c - a);

                    ans = min(ans, dist);
                }
            }
        }

        if(ans == INT_MAX)
            return -1;

        return ans;
    }
};