class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        vector<int> leftsum;
        vector<int> rightsum;
        int left=0;
        int right=0;
        for(int i=0;i<nums.size();i++){
            leftsum.push_back(left);
            left=left+nums[i];
        }
        for(int j=nums.size()-1;j>=0;j--){
            rightsum.push_back(right);
            right=right+nums[j];
        }
        reverse(rightsum.begin(), rightsum.end());
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(leftsum[i]-rightsum[i]));
        }
   return ans;
    }
};