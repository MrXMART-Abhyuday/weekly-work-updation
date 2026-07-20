class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> arr;
        for (auto &row : grid)
            for (int x : row)
                arr.push_back(x);
        while(k--){
            int last = arr.back();
            arr.pop_back();
            arr.insert(arr.begin(), last);
        }
        int idx = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                grid[i][j] = arr[idx];
                idx++;
            }
        }
    return grid;}
};