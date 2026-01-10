class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        vector<vector<int>> dp(n, vector<int> (m, -1));
        return solve(n-1, m-1, s1, s2, dp);

    }
private:    
    int solve(int i, int j, string &s1, string &s2, vector<vector<int>> &dp){
        //base case
        if(i < 0){
            int ans = 0;
            for(int k=0; k<=j; k++) ans += s2[k];
            return ans;
        }

        if(j < 0){
            int ans = 0;
            for(int k=0; k<=i; k++) ans += s1[k];
            return ans;
        }

        if(dp[i][j] != -1) return dp[i][j];

        //if match --- no need to delete
        if(s1[i] == s2[j]){
            return dp[i][j] = solve(i-1, j-1, s1, s2, dp);
        }

        //not match -- delete 
        else{
            int ans1 = int(s1[i] + solve(i-1, j, s1, s2, dp));
            int ans2 = int(s2[j] + solve(i , j -1, s1, s2, dp));
            return  dp[i][j] = min(ans1, ans2);
        }
    }
};