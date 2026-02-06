class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int minIdx = 0;
        int maxKeep = 1;

        for (int maxIdx = 0; maxIdx < n; maxIdx++) {

            while ((long long)nums[maxIdx] > (long long)nums[minIdx] * k) {
                minIdx++;
            }

            int size = maxIdx - minIdx + 1;
            if (size > maxKeep) {
                maxKeep = size;
            }
        }

        return n - maxKeep;
    }
};
