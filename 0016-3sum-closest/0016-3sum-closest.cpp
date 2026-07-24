class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int max_diff = INT_MAX;
        int res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i< n; i++){
            int left = i+1;
            int right = n -1;
            while(left<right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum== target){
                    left++;
                    right--;
                }else if(sum< target){
                    left++;
                }else{
                    right--;
                }
                int diff = abs(sum - target);
                if(diff< max_diff){
                    max_diff = diff;
                    res = sum;
                }
            }
        }
        return res;

    }
};