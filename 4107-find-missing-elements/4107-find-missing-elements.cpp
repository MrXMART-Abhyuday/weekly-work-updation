class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans;

        int mini = nums[0];
        int maxi = nums[nums.size()-1];

        int i = 0;

        while(mini <= maxi) {
            if(i < nums.size() && mini == nums[i]) {
                i++;
            }
            else {
                ans.push_back(mini);
            }

            mini++;
        }

        return ans;
    }
};