class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=nums.size();
        vector <int> arr;
        for(int i=0;i<l;i++){
            if(nums[i]!=0){
                arr.push_back(nums[i]);
            }
        }
        int m=arr.size();
        int zeroes=l-m;
        for(int i=0;i<zeroes;i++){
            arr.push_back(0);
        }
        nums = arr;

    }

};