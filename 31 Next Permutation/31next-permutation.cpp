class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-2;
        while(i>=0 &&nums[i]>=nums[i+1]) {
            i--;
        }
        if (i>=0) {
            int j=n-1;
            while(nums[j]<=nums[i]) {
                j--;
            }
            swap(nums[i],nums[j]);
        }
        reverse(nums.begin()+i+1,nums.end());
    }
    //teen step; right se start kro and first element smaller ko khojo thats pivot
    //pivot and first element jo us pivot se biggeer ho right mai un dono ko swap kr do
    // pivot k right k jitne index h sbko reverse kr do
};