class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {

        while (true) {
            bool found = false;

            for (int num : nums) {
                if (num == original) {
                    found = true;
                    original *= 2;
                    break;
                }
            }

            if (!found)
                return original;
        }
    }
};