class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int original=n;
        int rev=0;
        while(n>0) {
            rev=rev*10+n%10;
            n/=10;
        }
        int l = min(original,rev);
        int r = max(original,rev);
        int sum=0;
        for(int num=l;num<=r;num++) {
            if(num < 2) continue;
            bool prime = true;
            for(int i=2;i*i<=num;i++) {
                if(num%i==0) {
                    prime=false;
                    break;
                }
            }
            if(prime)
                sum += num;
        }
        return sum;
    }
};