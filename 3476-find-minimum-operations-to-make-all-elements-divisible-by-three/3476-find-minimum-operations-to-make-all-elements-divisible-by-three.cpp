class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int i=0;
        int count=0;
        while(i<nums.size()){
            if(nums[i]%3==1) count++;
            if(nums[i]%3==2) count++;
            if(nums[i]%3==1) count=count;
            i++;
        }
    return count;}
};