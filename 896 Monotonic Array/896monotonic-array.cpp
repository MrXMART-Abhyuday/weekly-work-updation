class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool check1=false;
        bool check2=false;
        if(nums.size()==1) return true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]){
                check1=true;
            }
            else{
                check1=false;
                break;
            }
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                check2=true;
            }
            else{
                check2=false;
                break;
            }
        }
    return check1 or check2;
    }
};