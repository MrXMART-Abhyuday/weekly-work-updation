class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int n = nums.size();

        // replace VLA with vector (logic unchanged)
        vector<int> arr = nums;

        int count = 0;
        int sumofindex1 = 0;
        int sumofindex2 = 0;

        while (true) {
            bool sorted = true;
            for (int i = 0; i < n - 1; i++) {
                if (arr[i] > arr[i + 1]) {
                    sorted = false;
                    break;
                }
            }
            if (sorted) break;

            int countindex1 = 0;
            int countindex2 = 1;

            sumofindex1 = arr[countindex1] + arr[countindex2];

            for (int i = 1; i < n - 1; i++) {
                sumofindex2 = arr[i] + arr[i + 1];
                if (sumofindex2 < sumofindex1) {
                    sumofindex1 = sumofindex2;
                    countindex1 = i;
                    countindex2 = i + 1;
                }
            }

            int index = countindex1;

            for (int i = index; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }

            n--;
            arr[index] = sumofindex1;
            count++;
        }

        return count;
    }
};
