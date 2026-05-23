// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int> ans(nums.size());
//         for(int i=0;i<nums.size();i++){
//         int count=1;
//             for(int j=0;j<nums.size();j++){
//                 if(i!=j){
//                     if(nums[i]==1)
//                     count=count*nums[j];
//                 }
//             }
//         ans[i]=count;
//         }
//    return ans; 
//    }
// };
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);

        int left=1;
        for(int i=0;i<n;i++){
            ans[i]=left;
            left*=nums[i];
        }

        int right=1;
        for(int i=n-1;i>=0;i--){
            ans[i]*=right;
            right*=nums[i];
        }

        return ans;
    }
};