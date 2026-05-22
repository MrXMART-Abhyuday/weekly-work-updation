class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int l=nums.size();
        sort(nums.begin(), nums.end());
        return nums[l-k];
        // 3 2 3 1 2 4 5 5 6
        // 1 2 2 3 3 4 5 5 6
        // 0 1 2 3 4 5 6 7 8
    }
};