class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits;
        while(n>0){
            int rem=n%10;
            n=n/10;
            digits.push_back(rem);
        }
        int prod=1;
        sort(digits.begin(),digits.end());
        prod=digits[digits.size()-1]* digits[digits.size()-2];
        return prod;
    }
};