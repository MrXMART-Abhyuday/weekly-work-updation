class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        int i=0;
        while(i<nums.size()-1){ 
            int g=__gcd(nums[i], nums[i+1]);
            if(g==1){
                i++;
            }
            else{
                long long x = lcm(nums[i], nums[i+1]);
                nums[i] = x;
                nums.erase(nums.begin() + i + 1);
                if(i > 0) i--;
            }
        }
return nums;
    }
};