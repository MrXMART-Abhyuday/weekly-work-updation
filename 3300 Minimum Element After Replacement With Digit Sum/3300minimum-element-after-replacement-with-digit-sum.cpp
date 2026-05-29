class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int sum=0;
            int num = nums[i];
            while(num > 0){
                sum += num % 10;
                num /= 10;
            }
            nums[i] = sum;
        }
        int min=nums[0];
        for(int i=1;i<nums.size();i++){
            if(min>nums[i]) min=nums[i];
        }
    return min;}
};