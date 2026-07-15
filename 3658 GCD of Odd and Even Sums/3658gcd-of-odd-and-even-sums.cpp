class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd=0;
        int even=0;
        int i=0;
        while(i<=2*n)//5
        {
            if(i%2==0){
                even=even+i;//0+2
            }
            else{
                odd=odd+i;//1+3+
            }
            i++;
        }
    return gcd(odd,even);
    }
};