class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxindex= max_element(candies.begin(),candies.end())-candies.begin();
        int maximum = *max_element(candies.begin(), candies.end());
        vector<bool> output;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maximum){
                output.push_back(true);
            }
            else{
                output.push_back(false);
            }
        }
return output;
    }
};