class Solution {
public:
    int maxCoins(vector<int>& piles) {
        // 1 2 3 4 5 6 7 8 9
        // 1 8 9
        // 2 6 7
        // 3 4 5
        // 1 2 2 4 7 8
        // 1 7 8
        // 2 2 4
        sort(piles.begin(),piles.end());
        int i=0;
        int j=piles.size()-1;
        int k=j-1;
        long long mine=0;
        for(int i=0;i<(piles.size()/3);i++){
            if(i<k){
                mine=mine+piles[k];
                k=k-2;
            }
        } 
    return mine;}
};