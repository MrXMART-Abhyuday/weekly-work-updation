class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        for(int k=0;k<nums.size();k++){
            int i=0;
            while(i+2<nums.size()){
                if(nums[i]>nums[i+2]){
                    swap(nums[i],nums[i+2]);
                }i=i+2;
            }
            int j=1;
            while(j+2<nums.size()){
                if(nums[j]<nums[j+2]){
                    swap(nums[j],nums[j+2]);
                }
                j=j+2;
            }
        }
    return nums;
    }
};