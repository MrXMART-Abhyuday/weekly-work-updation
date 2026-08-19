class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        unordered_map<int, vector<int>> mp;

        for (auto x : reservedSeats)
            mp[x[0]].push_back(x[1]);

        int ans = (n - mp.size()) * 2;

        for (auto row : mp) {

            vector<int> seat(11, 0);

            for (int s : row.second)
                seat[s] = 1;

            bool left = !seat[2] && !seat[3] && !seat[4] && !seat[5];
            bool mid = !seat[4] && !seat[5] && !seat[6] && !seat[7];
            bool right = !seat[6] && !seat[7] && !seat[8] && !seat[9];

            if (left && right)
                ans += 2;
            else if (left || mid || right)
                ans += 1;
        }

        return ans;
    }
};