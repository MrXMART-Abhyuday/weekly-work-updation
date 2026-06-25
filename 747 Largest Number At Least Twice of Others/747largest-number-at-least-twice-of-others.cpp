class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> copy = nums;
        int ans;
        sort(copy.begin(),copy.end());
        if(copy[copy.size()-1]>=copy[copy.size()-2]*2){
            for(int i=0;i<nums.size();i++){
                //3 6 1 0 nums
                //0 1 3 6 copy
                if(copy[nums.size()-1]==nums[i]){
                    ans=i;
                    break;
                } 
            }
        }
        else{return -1;}
    return ans;
    }
};