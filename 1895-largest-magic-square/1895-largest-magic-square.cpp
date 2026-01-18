class Solution {
public:
    int rows;
    int cols;

    bool isValid(int k, vector<vector<int>> &rowPs, vector<vector<int>> &colPs,
                 vector<vector<int>> &rightDiagPs, vector<vector<int>> &leftDiagPs) {

        for (int r = 1; r + k - 1 <= rows; r++) {
            for (int c = 1; c + k - 1 <= cols; c++) {

                // reference sum (first row)
                int val = rowPs[r][c + k - 1] - rowPs[r][c - 1];

                bool ok = true;

                // check remaining rows
                for (int i = 1; i < k; i++) {
                    int rowSum = rowPs[r + i][c + k - 1] - rowPs[r + i][c - 1];
                    if (rowSum != val) {
                        ok = false;
                        break;
                    }
                }
                if (!ok) continue;

                // check all columns
                for (int i = 0; i < k; i++) {
                    int colSum = colPs[r + k - 1][c + i] - colPs[r - 1][c + i];
                    if (colSum != val) {
                        ok = false;
                        break;
                    }
                }
                if (!ok) continue;

                // check diagonals
                int rightDiagSum = rightDiagPs[r + k - 1][c + k - 1] - rightDiagPs[r - 1][c - 1];
                int leftDiagSum  = leftDiagPs[r + k - 1][c] - leftDiagPs[r - 1][c + k];

                if (rightDiagSum == val && leftDiagSum == val)
                    return true; // found valid k × k magic square
            }
        }
        return false;
    }

    int largestMagicSquare(vector<vector<int>>& grid) {
        rows = grid.size();
        cols = grid[0].size();

        vector<vector<int>> rowPs(rows + 1, vector<int>(cols + 1, 0));
        vector<vector<int>> colPs(rows + 1, vector<int>(cols + 1, 0));
        vector<vector<int>> rightDiagPs(rows + 1, vector<int>(cols + 1, 0));
        vector<vector<int>> leftDiagPs(rows + 1, vector<int>(cols + 2, 0));

        // row prefix sums
        for (int r = 1; r <= rows; r++)
            for (int c = 1; c <= cols; c++)
                rowPs[r][c] = rowPs[r][c - 1] + grid[r - 1][c - 1];

        // column prefix sums
        for (int c = 1; c <= cols; c++)
            for (int r = 1; r <= rows; r++)
                colPs[r][c] = colPs[r - 1][c] + grid[r - 1][c - 1];

        // right diagonal prefix sums
        for (int r = 1; r <= rows; r++)
            for (int c = 1; c <= cols; c++)
                rightDiagPs[r][c] = rightDiagPs[r - 1][c - 1] + grid[r - 1][c - 1];

        // left diagonal prefix sums
        for (int r = 1; r <= rows; r++)
            for (int c = cols; c >= 1; c--)
                leftDiagPs[r][c] = leftDiagPs[r - 1][c + 1] + grid[r - 1][c - 1];

        int maxSquare = 1;
        int kLimit = min(rows, cols);

        for (int k = kLimit; k >= 2; k--) {
            if (isValid(k, rowPs, colPs, rightDiagPs, leftDiagPs)) {
                maxSquare = k;
                break; // largest found, no need to check smaller
            }
        }

        return maxSquare;
    }
};