class Solution {
public:
    bool isMatch(string s, string p) {
          int m = s.length();
        int n = p.length();
        
        // Create a DP table where dp[i][j] means whether s[0..i-1] matches p[0..j-1]
        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
        
        // Base case: empty pattern matches empty string
        dp[0][0] = true;
        
        // Initialize dp table for patterns like a*, a*b*, a*b*c* which can match an empty string
        for (int j = 1; j <= n; ++j) {
            if (p[j - 1] == '*') {
                dp[0][j] = dp[0][j - 2];
            }
        }
        
        // Fill the dp table
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (p[j - 1] == s[i - 1] || p[j - 1] == '.') {
                    dp[i][j] = dp[i - 1][j - 1];
                } else if (p[j - 1] == '*') {
                    dp[i][j] = dp[i][j - 2];  // Match zero occurrence
                    if (p[j - 2] == s[i - 1] || p[j - 2] == '.') {
                        dp[i][j] = dp[i][j] || dp[i - 1][j];
                    }
                }
            }
        }
        
        // The answer is whether the entire string matches the entire pattern
        return dp[m][n];
    }
};