class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int targetindex=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
            targetindex=i;
            break;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(targetindex==-1){
                if(nums[i]>target){
                    targetindex=i;
                    break;
                }
            }
        }
        if(targetindex == -1){
    return nums.size();
}
return targetindex;
    }
};