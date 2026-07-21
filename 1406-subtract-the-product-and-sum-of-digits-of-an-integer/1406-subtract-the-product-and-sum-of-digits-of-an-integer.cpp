class Solution {
public:
    int subtractProductAndSum(int n) {
        int ans;
        int sum=0;
        int mul=1;
        while(n>0){
            int rem=n%10;
            n=n/10;
            mul*=rem;
            sum+=rem;
        }
        ans=mul-sum;
        return ans;
    }
};