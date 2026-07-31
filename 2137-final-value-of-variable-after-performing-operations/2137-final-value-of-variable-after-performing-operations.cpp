class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;

        for (string op : operations) {
            if (op == "++X" || op == "X++") {
                X++;
            }

            if (op == "--X" || op == "X--") {
                X--;
            }
        }

        return X;
    }
};