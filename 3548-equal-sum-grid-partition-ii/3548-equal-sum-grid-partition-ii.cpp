class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        unordered_map<long long, int> mp, mp2, mp1;
        long long t = 0;

        // total sum + frequency
        for (auto &row : grid) {
            for (auto val : row) {
                t += val;
                mp[val]++;
            }
        }

        mp2 = mp;
        long long sum = 0;

        // 🔹 Horizontal cuts
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                sum += grid[i][j];
                mp1[grid[i][j]] = 1;
                mp2[grid[i][j]]--;
            }

            long long x = 2 * sum - t;

            if (x == 0) return true;

            else if (x > 0) {
                if (i == 0 || m == 1) {
                    if (grid[0][0] == x || grid[0][m-1] == x) return true;
                    if (m == 1 && grid[i][0] == x) return true;
                } 
                else if (mp1.count(x)) return true;
            } 
            else {
                x = abs(x);
                if (i == n-2 || m == 1) {
                    if (grid[n-1][0] == x || grid[n-1][m-1] == x) return true;
                    if (m == 1 && grid[i+1][0] == x) return true;
                } 
                else if (mp2.count(x) && mp2[x]) return true;
            }
        }

        // 🔹 Vertical cuts
        sum = 0;
        mp2 = mp;
        mp1.clear();

        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                sum += grid[i][j];
                mp1[grid[i][j]] = 1;
                mp2[grid[i][j]]--;
            }

            long long x = 2 * sum - t;

            if (x == 0) return true;

            else if (x > 0) {
                if (j == 0 || n == 1) {
                    if (grid[0][0] == x || grid[n-1][0] == x) return true;
                    if (n == 1 && grid[0][j] == x) return true;
                } 
                else if (mp1.count(x)) return true;
            } 
            else {
                x = abs(x);
                if (j == m-2 || n == 1) {
                    if (grid[0][m-1] == x || grid[n-1][m-1] == x) return true;
                    if (n == 1 && grid[0][j+1] == x) return true;
                } 
                else if (mp2.count(x) && mp2[x]) return true;
            }
        }

        return false;
    }
};