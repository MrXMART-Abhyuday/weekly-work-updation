class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> sum;
        int i=0;
        int curr=0;
        sum.push_back(curr);
        while(i<gain.size()){
            curr=curr+gain[i];
            i++;
            sum.push_back(curr);
        }
        int max=*max_element(sum.begin(), sum.end());
    return max;
    }
};