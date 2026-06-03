class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int i=1;
        int j=0;
        sort(nums.begin(),nums.end());
        vector<int> ans = nums;
        vector<int> final;
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        
        // while(i<nums.size()-1 && j<ans.size()){
        //     if(nums[i]!=nums[i+1]){
        //         if(nums[i]!=ans[j]){
        //             final.push_back(nums[i]);
        //             j++;
        //         }
        //     }
        //     i++;
        // }
        while(i <= nums.size()){
            if(j < ans.size() && ans[j] == i){
                j++;
            }
            else{
                final.push_back(i);
            }
            i++;
        }
    return final;
    }
};