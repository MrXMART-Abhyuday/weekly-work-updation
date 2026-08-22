class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int m=n;
        int prod=1;
        bool ans=false;
        while(n>0){
            int rem=n%10;
            sum=sum+rem;
            prod=prod*rem;
            n=n/10;
        }
        if(m%(sum+prod)==0){
            ans=true;
            return ans;
        }
    return ans;
    }
};