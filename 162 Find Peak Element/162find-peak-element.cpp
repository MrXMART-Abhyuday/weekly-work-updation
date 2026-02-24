class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak;
        int n=nums.size();
        if(nums.size()==1){
            peak=0;
            return peak;
        }
        if(nums[n-1]>nums[n-2]){
                peak=n-1;
        }
        if(nums[0]>nums[1]){
            peak=0;
            return peak;
        }
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1] && nums[i]>nums[i-1]){
                peak=i;
            }
        }
    return peak;
    }
};