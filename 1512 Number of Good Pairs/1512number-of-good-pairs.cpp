class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        } 
        int count=0;
        for(auto it:freq){
            if(it.second>1){
                count=count+it.second*(it.second-1)/2;
            }
        }
    return count;}
};