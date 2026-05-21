class Solution {
public:
    int isHappy(int n) {
        int singleDigitCount = 0;

        while(true) {
            vector<int> digits;
            while(n>0) {
                digits.push_back(n % 10);
                n =n/10;
            }

            int sum=0;
            for(int i=0;i<digits.size();i++)
                sum += digits[i] * digits[i];

            n=sum;
            if(n == 1) return 1;
            if(n < 10) {
                singleDigitCount++;
                if(singleDigitCount == 2) return 0;
            }
        }
    }
};
