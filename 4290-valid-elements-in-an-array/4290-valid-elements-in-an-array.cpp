class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            bool left = true;
            bool right = true;

            // Check left side
            for (int j = 0; j < i; j++) {
                if (nums[j] >= nums[i]) {
                    left = false;
                    break;
                }
            }

            // Check right side
            for (int j = i + 1; j < n; j++) {
                if (nums[j] >= nums[i]) {
                    right = false;
                    break;
                }
            }

            if (left || right)
                ans.push_back(nums[i]);
        }

        return ans;
    }
};