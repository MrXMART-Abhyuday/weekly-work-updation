class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(nums.size(),0);
        int i=0;
        while(i<n){
            ans[i]=nums[nums[i]];
            i++;
        }
    return ans;}
};