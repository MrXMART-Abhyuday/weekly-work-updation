class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int r=digits.size()-1;
        while(r>=0){
            if(digits[r]<9){
            digits[r]++;
            return digits;
            }
            else{
                digits[r]=0;
                r--;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};