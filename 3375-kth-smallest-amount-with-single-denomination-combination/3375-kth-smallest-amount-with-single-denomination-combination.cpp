class Solution {
public:
    long long findKthSmallest(vector<int>& coins, int k) {
        long long low = 1;
        long long high = 1LL * coins[0] * k;

        while (low < high) {
            long long mid = low + (high - low) / 2;

            long long count = 0;
            int n = coins.size();

            // Inclusion-Exclusion
            for (int mask = 1; mask < (1 << n); mask++) {
                long long lcm = 1;
                int bits = 0;
                bool valid = true;

                for (int i = 0; i < n; i++) {
                    if (mask & (1 << i)) {
                        bits++;

                        lcm = lcm / gcd(lcm, (long long)coins[i]) * coins[i];

                        if (lcm > mid) {
                            valid = false;
                            break;
                        }
                    }
                }

                if (!valid)
                    continue;

                if (bits % 2 == 1)
                    count += mid / lcm;
                else
                    count -= mid / lcm;
            }

            if (count >= k)
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};