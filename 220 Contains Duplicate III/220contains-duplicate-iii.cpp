class Solution {
public:
    long long getBucket(long long x, long long w) {
        if (x >= 0) return x / w;
        return (x + 1) / w - 1;
    }

    bool containsNearbyAlmostDuplicate(vector<int>& nums,
                                       int indexDiff,
                                       int valueDiff) {

        unordered_map<long long,long long> bucket;

        long long w = (long long)valueDiff + 1;

        for (int i = 0; i < nums.size(); i++) {

            long long num = nums[i];
            long long id = getBucket(num, w);

            if (bucket.count(id))
                return true;

            if (bucket.count(id - 1) &&
                abs(num - bucket[id - 1]) <= valueDiff)
                return true;

            if (bucket.count(id + 1) &&
                abs(num - bucket[id + 1]) <= valueDiff)
                return true;

            bucket[id] = num;

            if (i >= indexDiff) {
                long long oldId =
                    getBucket(nums[i - indexDiff], w);

                bucket.erase(oldId);
            }
        }

        return false;
    }
};