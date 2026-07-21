class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int i=0;
        while(i!=nums.size()){
            int size=nums[i];
            for(int k=0;k<size;k++){
                ans.push_back(nums[i+1]);
            }
            i=i+2;
        }
    return ans;
    }
};