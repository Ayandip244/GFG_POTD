class Solution {
  public:
  int solve(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp) {
        int m = grid.size();
        int n = grid[0].size();
        if (i>=m || j>=n || grid[i][j]==1) return 0;
        if (i==m-1 && j==n-1) return 1;
        if (dp[i][j] != -1) return dp[i][j];
        int right = solve(i, j + 1, grid, dp);
        int down  = solve(i + 1, j, grid, dp);
        return dp[i][j] = right + down;
    }
    int uniquePaths(vector<vector<int>> &grid) {
        // code here
        int m = grid.size();
        int n = grid[0].size();
        if (grid[0][0]==1 || grid[m-1][n-1]==1) return 0;
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return solve(0, 0, grid, dp);
    }
};
