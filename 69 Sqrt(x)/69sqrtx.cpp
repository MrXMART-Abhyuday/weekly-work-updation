class Solution {
public:
    int mySqrt(int x) {//37
        int count=0;
        int sub=1;
        int quotient=x;
        while(quotient>=0){
            x=x-sub;//37-1=36
            sub=sub+2;//1+2=3
            count++;//1
            quotient=x;//36
        }
    return count-1;
    }
};