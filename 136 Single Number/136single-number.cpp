class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        int count;
        for(int num : nums){
            freq[num]++;
        }
        for(auto it : freq){
            if(it.second == 1){
                count= it.first;
            }
        }
    return count;}
};