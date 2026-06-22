class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left=*max_element(weights.begin(),weights.end());
        int right=accumulate(weights.begin(),weights.end(),0);
        while(left<=right){
            int mid=(left+right)/2;
            int daysused=1;
            int load=0;
            for(int i=0;i<weights.size();i++){
                if(load+weights[i]<=mid){
                    load+=weights[i];
                }
                else{
                    daysused++;
                    load = weights[i];
                }
            }
            if(daysused<=days){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
    return left;
    }
};