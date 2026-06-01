class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int count=0;
        int sum=0;
        if(cost.size()==2) {
            sum=cost[0]+cost[1];
            return sum;
        }
        if(cost.size()==1) {
            sum=cost[0];
            return sum;
        }

        for(int i = cost.size() - 1; i >= 0; i--) {
            count++;
            if(count==3) {
                count = 0;
                continue;
            }
            sum += cost[i];
        }
        // 2 2 5 6 7 9
        // 9+7=16+6=16
        // 2 2 5
        // 5+2=7+2=7 == 23
    return sum;
    }
};