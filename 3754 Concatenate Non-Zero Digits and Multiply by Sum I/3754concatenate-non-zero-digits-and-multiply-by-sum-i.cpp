class Solution {
public:
    long long sumAndMultiply(int n) {
        int x = 0;
        int sum = 0;
        int p = 1;
        while (n>0) {
            int digit=n%10;
            sum=sum+digit;
            if (digit != 0) {
                x=x+digit*p;
                p=p*10;
            }
            n=n/10;
        }
        return 1LL * x * sum;
    }
};