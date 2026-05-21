class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;

        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0; i < m; i++) {
            int mn = matrix[i][0];
            int col = 0;

            for(int j = 1; j < n; j++) {
                if(matrix[i][j] < mn) {
                    mn = matrix[i][j];
                    col = j;
                }
            }
            bool lucky = true;

            for(int k = 0; k < m; k++) {
                if(matrix[k][col] > mn) {
                    lucky = false;
                    break;
                }
            }

            if(lucky)
                ans.push_back(mn);
        }

        return ans;
    }
};