class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        long long sumi=0;
        vector<int> sum;

        for(int i=0;i<nums.size();i++){
            sumi+=nums[i];
            sum.push_back(sumi);
        }
    return sum;
    }
};