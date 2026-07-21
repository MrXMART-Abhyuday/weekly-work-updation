class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> ans;
        int mx = 0;
        for (int i = 0; i < nums.size(); i++) {
            mx = max(mx, nums[i]);
            ans.push_back(gcd(nums[i], mx));
        }
        sort(ans.begin(),ans.end());
        // reverse(ans.begin(),ans.end());
        int i=0;
        int j=ans.size()-1;
        long long sum=0;
        while(i<j){
            sum=sum+gcd(ans[i],ans[j]);
            i++;
            j--;
        }   
    return sum;}
};