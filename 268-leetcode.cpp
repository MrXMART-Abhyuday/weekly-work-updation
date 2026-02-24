class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l=nums.size();
        sort(nums.begin(),nums.end());
        int missingnumber=l;
        for(int i=0;i<l;i++){
            if(nums[i]!=i){
                missingnumber=i;
                break;
            }
        }
        
        return missingnumber;
    }
};