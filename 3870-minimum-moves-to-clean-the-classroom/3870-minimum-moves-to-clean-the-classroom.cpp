class Solution {
public:
    int minMoves(vector<string>& classroom, int energy) {
        int n = classroom.size();
        int m = classroom[0].size();

        vector<pair<int,int>> trash;
        int sr = 0, sc = 0;

        // Find starting position and all litter
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (classroom[i][j] == 'S') {
                    sr = i;
                    sc = j;
                }
                else if (classroom[i][j] == 'L') {
                    trash.push_back({i, j});
                }
            }
        }

        int k = trash.size();

        // If there is no litter
        if (k == 0)
            return 0;

        // mask = which litter pieces have been collected
        int totalMask = 1 << k;

        // dist[r][c][energy][mask]
        vector<vector<vector<vector<int>>>> dist(
            n,
            vector<vector<vector<int>>>(
                m,
                vector<vector<int>>(
                    energy + 1,
                    vector<int>(totalMask, -1)
                )
            )
        );

        queue<tuple<int,int,int,int>> q;

        dist[sr][sc][energy][0] = 0;
        q.push({sr, sc, energy, 0});

        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};

        while (!q.empty()) {
            auto [r, c, e, mask] = q.front();
            q.pop();

            int moves = dist[r][c][e][mask];

            // All litter collected
            if (mask == totalMask - 1)
                return moves;

            for (int d = 0; d < 4; d++) {
                int nr = r + dr[d];
                int nc = c + dc[d];

                // Outside classroom
                if (nr < 0 || nr >= n || nc < 0 || nc >= m)
                    continue;

                // Wall
                if (classroom[nr][nc] == 'X')
                    continue;

                // Need energy to move
                if (e == 0)
                    continue;

                int ne = e - 1;
                int nmask = mask;

                // If we move onto litter
                if (classroom[nr][nc] == 'L') {
                    for (int i = 0; i < k; i++) {
                        if (trash[i].first == nr &&
                            trash[i].second == nc) {
                            nmask |= (1 << i);
                            break;
                        }
                    }
                }

                // Recharge at energy station
                if (classroom[nr][nc] == 'R') {
                    ne = energy;
                }

                if (dist[nr][nc][ne][nmask] == -1) {
                    dist[nr][nc][ne][nmask] = moves + 1;
                    q.push({nr, nc, ne, nmask});
                }
            }
        }

        return -1;
    }
};