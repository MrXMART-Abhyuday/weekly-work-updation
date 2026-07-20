class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> diff(101, 0);

        for (auto &x : logs) {
            diff[x[0] - 1950]++;
            diff[x[1] - 1950]--;
        }

        int population = 0;
        int maxi = 0;
        int ans = 1950;

        for (int i = 0; i < 101; i++) {
            population += diff[i];

            if (population > maxi) {
                maxi = population;
                ans = 1950 + i;
            }
        }

        return ans;
    }
};