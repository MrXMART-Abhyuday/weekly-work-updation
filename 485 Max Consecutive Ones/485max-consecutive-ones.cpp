class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> cnt;
        int i = 0;
        int count = 0;
        while(i<nums.size()){
            if(nums[i]!=1){
                cnt.push_back(count);
                count = 0;
            }
            else{
                count++;
            }
            i++;
        }
        cnt.push_back(count);

        int maxi=cnt[0];

        for(int i=1;i<cnt.size();i++){
            if(maxi<cnt[i]){
                maxi=cnt[i];
            }
        }
        return maxi;
    }
};