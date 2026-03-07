class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int i=0;
        int j=1;
        int index1=0;
        int index2=nums.size()/2;

        while(j<nums.size()){
            if(nums[i]==nums[j]) j++;
            else{
                index1=j-i;
                if(index1>index2) return nums[i];

                i=j;
                j++;
            }
        }

        index1=j-i;
        if(index1>index2) return nums[i];

        return nums[0];
    }
};