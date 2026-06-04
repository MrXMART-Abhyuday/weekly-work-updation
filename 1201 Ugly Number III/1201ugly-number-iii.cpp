class Solution {
public:
    int nthUglyNumber(int n, int a, int b, int c) {

        long long low = 1, high = 2e9;

        while(low < high) {

            long long mid = low + (high - low) / 2;

            long long count =
                mid / a +
                mid / b +
                mid / c
                - mid / ((long long)a * b / __gcd(a, b))
                - mid / ((long long)a * c / __gcd(a, c))
                - mid / ((long long)b * c / __gcd(b, c))
                + mid / ((((long long)a * b / __gcd(a, b)) * c) /
                         __gcd(((long long)a * b / __gcd(a, b)), (long long)c));

            if(count < n)
                low = mid + 1;
            else
                high = mid;
        }

        return low;
    }
};