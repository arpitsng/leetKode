class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.length();

        string t = ""; // create it as reverse of s1
        for(int i=n-1; i>=0; i--){
            t += s[i];
        }
        //vector<vector<int>> dp(n+1, vector<int> (n+1, 0)); //n+1, m+1 coz making it look like an ONE BASED INDEXING

        vector<int> prev(n+1, 0), curr(n+1, 0);
        int m = n;
        //base case: dp[0...n][0] = 0 , dp[0][0..m] = 0 -- since already its zero no need to do so 

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(s[i-1] == t[j-1]) curr[j] = 1 + prev[j-1];

                else curr[j] = max(prev[j] , curr[j-1]);
            }
            prev = curr;
        }

        return prev[n];
    }

};