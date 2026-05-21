class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> arr;

        for(int i=0;i<nums.size();i++) {
            if(find(arr.begin(), arr.end(),nums[i])==arr.end()) {
                arr.push_back(nums[i]);
            }
        }

        sort(arr.begin(), arr.end());

        if(arr.size() >= 3)
            return arr[arr.size()-3];

        return arr[arr.size()-1];
    }
};