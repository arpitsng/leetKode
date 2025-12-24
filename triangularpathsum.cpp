//****************************** Memoization solution */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size(); 
        vector<vector<int>> dp = triangle;  // Copy structure and values
        for(auto& row : dp) {
            fill(row.begin(), row.end(), INT_MAX);  // Fill with INT_MAX // coz grid can contain value like -1
        }

        int minpath = solve(0, 0, m, triangle, dp);
        return minpath;
    }

private:
    int solve(int i, int j, int m, vector<vector<int>>& grid, vector<vector<int>> &dp){
        //base case -- reached last row
        if(i == m-1) return grid[i][j];

        if(dp[i][j] != INT_MAX) return dp[i][j];

        int down = solve(i+1, j, m, grid, dp);
        int downDiagonal = solve(i+1, j+1, m, grid, dp);

        return dp[i][j] = grid[i][j] + min(down, downDiagonal);
    }
};


//****************************** Tabulation solution */
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        vector<vector<int>> dp = triangle; // Copy the triangle
        
        // Start from second-last row and move upward
        for(int i = m-2; i >= 0; i--) {
            for(int j = 0; j <= i; j++) {
                // Current cell + minimum of two choices below
                dp[i][j] = triangle[i][j] + min(dp[i+1][j], dp[i+1][j+1]);
            }
        }
        
        return dp[0][0]; // Top of triangle has the answer
    }
};


//****************************** Space optimized Tabulation solution */
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        vector<int> dp = triangle[m-1] ; // start with the last row
        
        // Start from second-last row and move upward
        for(int i = m-2; i >= 0; i--) {
            for(int j = 0; j <= i; j++) {
                dp[j] = triangle[i][j] + min(dp[j], dp[j+1]);
            }
        }
        
        return dp[0]; // Top of triangle has the answer
    }
};
