#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxActiveSectionsAfterTrade(string s, vector<vector<int>>& queries) {
        int n = s.size();
        vector<int> runStart, runEnd, runCh;
        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && s[j] == s[i]) j++;
            runStart.push_back(i);
            runEnd.push_back(j - 1);
            runCh.push_back(s[i] - '0');
            i = j;
        }
        int m = runStart.size();

        vector<int> runIndexOfPos(n);
        for (int r = 0; r < m; r++)
            for (int p = runStart[r]; p <= runEnd[r]; p++) runIndexOfPos[p] = r;

        vector<int> prefOnes(n + 1, 0);
        for (int k = 0; k < n; k++) prefOnes[k + 1] = prefOnes[k] + (s[k] - '0');
        int totalOnes = prefOnes[n];

        const int NEG = INT_MIN / 2;
        vector<int> G(m, NEG);
        for (int r = 0; r < m; r++) {
            if (runCh[r] == 1 && r > 0 && r < m - 1) {
                G[r] = (runEnd[r - 1] - runStart[r - 1] + 1) + (runEnd[r + 1] - runStart[r + 1] + 1);
            }
        }

        // sparse table for range max on G
        int LOG = 1;
        while ((1 << LOG) <= max(m, 1)) LOG++;
        vector<vector<int>> table(LOG + 1, vector<int>(max(m,1), NEG));
        if (m > 0) table[0] = G;
        for (int k = 1; k <= LOG; k++) {
            for (int idx = 0; idx + (1 << k) <= m; idx++) {
                table[k][idx] = max(table[k - 1][idx], table[k - 1][idx + (1 << (k - 1))]);
            }
        }
        vector<int> logTable(m + 1, 0);
        for (int k = 2; k <= m; k++) logTable[k] = logTable[k / 2] + 1;

        auto rangeMax = [&](int l, int r) -> int {
            if (l > r) return NEG;
            int k = logTable[r - l + 1];
            return max(table[k][l], table[k][r - (1 << k) + 1]);
        };

        vector<int> ans;
        ans.reserve(queries.size());
        for (auto& q : queries) {
            int l = q[0], r = q[1];
            int runL = runIndexOfPos[l];
            int runR = runIndexOfPos[r];
            int diff = runR - runL;
            long long gain = 0;

            if (diff >= 2) {
                int j1 = runL + 1, j2 = runR - 1;
                long long best = NEG;

                if (j1 == j2) {
                    if (runCh[j1] == 1) {
                        long long leftPart = runStart[j1] - l;
                        long long rightPart = r - runEnd[j1];
                        best = leftPart + rightPart;
                    }
                } else {
                    if (runCh[j1] == 1) {
                        long long leftPart = runStart[j1] - l;
                        long long rightPart = runEnd[j1 + 1] - runStart[j1 + 1] + 1;
                        best = max(best, leftPart + rightPart);
                    }
                    if (runCh[j2] == 1) {
                        long long rightPart = r - runEnd[j2];
                        long long leftPart = runEnd[j2 - 1] - runStart[j2 - 1] + 1;
                        best = max(best, leftPart + rightPart);
                    }
                    int mid_lo = j1 + 1, mid_hi = j2 - 1;
                    if (mid_lo <= mid_hi) {
                        int mm = rangeMax(mid_lo, mid_hi);
                        best = max(best, (long long)mm);
                    }
                }
                gain = max(best, 0LL);
            }

            ans.push_back(totalOnes + (int)gain);
        }
        return ans;
    }
};