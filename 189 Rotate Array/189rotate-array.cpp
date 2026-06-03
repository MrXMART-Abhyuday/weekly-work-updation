class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // while(k--){
        //     int last=nums.size()-1;
        //     nums.insert(nums.begin(),nums[last]);
        //     nums.pop_back();
        // }
        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};