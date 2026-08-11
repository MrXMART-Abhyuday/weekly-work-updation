class Solution {
public:
    int missingInteger(vector<int>& nums) {

        // Step 1: Find sum of sequential prefix
        int sum = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            }
            else {
                break;
            }
        }

        // Step 2: Find smallest missing number >= sum
        while (true) {

            bool found = false;

            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == sum) {
                    found = true;
                    break;
                }
            }

            if (found == false) {
                return sum;
            }

            sum++;
        }
    }
};