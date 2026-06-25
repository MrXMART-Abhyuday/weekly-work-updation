class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n>1 && n%2!=0) return false;
        if(n<0) return false;
        if(n==0) return false;
        bool check=false;
        while(n%2==0){
            n=n/2;
        }
        if(n==1){
            check=true;
        }
    return check;
    }
};