class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0;
        int j=1;
        for(int i=0;i<nums.size();i++) {
            for(int j=i+1;j<nums.size() && j-i<=k;j++) {
                if(nums[i]==nums[j]) {
                    return true;
                }
            }
        }
    return false;
    }
};