class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        long long total = 0;

        // Step 1: Calculate total sum of all elements
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                total += grid[i][j];
            }
        }

        // If total sum is odd, equal partition is impossible
        if(total % 2 != 0) return false;

        long long sum = 0;

        // Step 2: Try partitioning row-wise
        // Keep adding row sums and check if it becomes half
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                sum += grid[i][j];
            }
            // If prefix sum equals half, valid horizontal cut exists
            if(sum == total / 2) return true;
        }

        sum = 0;

        // Step 3: Try partitioning column-wise
        // Keep adding column sums and check if it becomes half
        for(int j=0; j<m; j++){
            for(int i=0; i<n; i++){
                sum += grid[i][j];
            }

            // If prefix sum equals half, valid vertical cut exists
            if(sum == total / 2) return true;
        }

        // No valid partition found
        return false;
    }
};