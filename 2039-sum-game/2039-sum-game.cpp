class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();

        int leftSum = 0;
        int rightSum = 0;

        int leftQuestion = 0;
        int rightQuestion = 0;

        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?') {
                leftQuestion++;
            } else {
                leftSum += num[i] - '0';
            }
        }

        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?') {
                rightQuestion++;
            } else {
                rightSum += num[i] - '0';
            }
        }

        int sumDifference = leftSum - rightSum;
        int questionDifference = leftQuestion - rightQuestion;

        if (questionDifference % 2 != 0) {
            return true;
        }

        if (sumDifference == 0 && questionDifference == 0) {
            return false;
        }

        int requiredDifference = 9 * (questionDifference / 2);

        if (sumDifference == -requiredDifference) {
            return false;
        }

        return true;
    }
};