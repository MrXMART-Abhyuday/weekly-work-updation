class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int j=n;
        // 2 5 1
        // 3 4 7
        // 2 3 5 4 1 7
        vector<int> a;
        vector<int> b;
        vector<int> ans;
        for(int i=0;i<=n;i++){
            a.push_back(nums[i]);
        }            
        for(j=n;j<=nums.size()-1;j++){
            b.push_back(nums[j]);
        }
        int i=0;

        while(i<n){
            ans.push_back(a[i]);
            ans.push_back(b[i]);
            i++;
        }
    return ans;
    }
};