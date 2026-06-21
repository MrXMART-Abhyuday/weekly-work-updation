class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int s=costs.size();
        int max = *max_element(costs.begin(), costs.end());
        vector<int> count(max+1,0);
        for(int i=0;i<s;i++){
            count[costs[i]]++;
        }
        vector<int> sorted;
        for(int num = 0; num <= max; num++) {
            while(count[num] > 0) {
                sorted.push_back(num);
                count[num]--;
            }
        }
        //1 1 2 3 4    
        //7-1
        //6-1
        //5-2
        //3-3----3+1
        //0-4 invalid        
        int i=0;
        while(i<s && coins>=sorted[i]){
                coins=coins-sorted[i];
                i++;
        }
    return i;
    }
};