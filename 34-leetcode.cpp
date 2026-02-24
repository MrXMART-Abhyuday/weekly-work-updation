class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstindex=-1;
        int lastindex=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                firstindex=i;
                break;
            }
        }
        for(int j=firstindex;j<nums.size();j++){
            if(nums[j]==target){
                lastindex=j;
            }
        }
return {firstindex, lastindex};

    }
};