class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int max = *max_element(nums.begin(), nums.end());
        if(max < 1) return 1;
        vector<int> pos;
        for(int i=1;i<=nums.size()+1;i++){
            pos.push_back(i);
        }
        sort(nums.begin(),nums.end());

        auto it=upper_bound(nums.begin(),nums.end(),0);
        int position=it-nums.begin();
        
        int j=0;
        for(int i=position;i<nums.size();i++) {
            if(j>=pos.size()) break;
            if(nums[i]==pos[j]) {
                j++;
                while(i+1<nums.size()&& nums[i]==nums[i+1]) {
                    i++;
                }
            }
            else if(nums[i]>pos[j]) {
                return pos[j];
            }
        }
        if(j<pos.size()) return pos[j];
return nums.size()+1;
    }
};