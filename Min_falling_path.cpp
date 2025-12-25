#include<bits/stdc++.h>
using namespace std;

//memoization solution 

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int mini = INT_MAX;
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX)); 
        for(int i=0; i<n; i++){
            int path = solve(0, i, n, matrix, dp);
            mini = min(path, mini);
        }

        return mini;
    }

private:
    int solve(int i, int j, int n, vector<vector<int>> &grid, vector<vector<int>> &dp){
        if(i >= n || i < 0 || j >= n || j < 0) return INT_MAX; // first do boundry check

        if(i == n-1) return grid[i][j]; // last row reached


        if(dp[i][j] != INT_MAX) return dp[i][j];

        int path1 = solve(i+1, j-1, n, grid,dp);
        int path2 = solve(i+1, j, n, grid, dp);
        int path3 = solve(i+1, j+1, n, grid, dp);

        return dp[i][j] = grid[i][j] + min(path1, min(path2, path3)); 
    }
};