class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        long long perf=0;
        vector<pair<int,int>>eng;
        for(int i=0;i<n;i++){
            eng.push_back({efficiency[i],speed[i]});
        }
        sort(eng.begin(),eng.end(),greater<pair<int,int>>());
        priority_queue<int,vector<int>,greater<int>> pq;
        
        long long speedSum = 0;
        long long ans = 0;
        const int MOD = 1e9 + 7;

        for (int i = 0; i < n; i++) {
            int currEfficiency = eng[i].first;
            int currSpeed = eng[i].second;

            // Add current engineer
            pq.push(currSpeed);
            speedSum += currSpeed;

            // Keep only k engineers
            if (pq.size() > k) {
                speedSum -= pq.top();
                pq.pop();
            }

            // Calculate performance
            ans = max(ans, speedSum * currEfficiency);
        }

        return ans % MOD;
    }
};