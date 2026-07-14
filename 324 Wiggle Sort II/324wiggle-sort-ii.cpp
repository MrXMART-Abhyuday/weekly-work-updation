class Solution {
public:
    void wiggleSort(vector<int>& nums) {

        vector<int> temp = nums;
        sort(temp.begin(), temp.end());

        int n = nums.size();

        int i = (n - 1) / 2;   // End of first half
        int j = n - 1;         // End of second half

        for (int k = 0; k < n; k++) {

            if (k % 2 == 0) {
                nums[k] = temp[i];
                i--;
            }
            else {
                nums[k] = temp[j];
                j--;
            }
        }
    }
};