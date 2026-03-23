class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        long long MOD = 1e9 + 7;

        vector<vector<long long>> maxDP(m+1, vector<long long>(n+1, 0));
        vector<vector<long long>> minDP(m+1, vector<long long>(n+1, 0));

        maxDP[0][0] = minDP[0][0] = grid[0][0];

        // first column - all m-rows (except row 0)
        for (int i = 1; i < m; i++) {
            maxDP[i][0] = minDP[i][0] = maxDP[i-1][0] * grid[i][0];
        }
        // first row - all n-columns (excpet col 0)
        for (int j = 1; j < n; j++) {
            maxDP[0][j] = minDP[0][j] = maxDP[0][j-1] * grid[0][j];
        }

        // for remaining cells
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                int val = grid[i][j];

                long long a = maxDP[i-1][j] * val;
                long long b = minDP[i-1][j] * val;
                long long c = maxDP[i][j-1] * val;
                long long d = minDP[i][j-1] * val;

                maxDP[i][j] = max({a, b, c, d});
                minDP[i][j] = min({a, b, c, d});
            }
        }
        long long res = maxDP[m-1][n-1];

        if (res < 0)
            return -1;
        return res % MOD;
    }
};