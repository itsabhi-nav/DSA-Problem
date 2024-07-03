class Solution {
public:
    int find(int stairs, int n, vector<int> &dp){
        if(stairs==n){
            return 1;
        }
        
        if(stairs>n){
            return 0 ;
        }
        
        if(dp[stairs]!=-1)
            return dp[stairs];
            
        dp[stairs]= find(stairs+1,n,dp)+find(stairs+2,n,dp);
        return dp[stairs];
    }
    
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return find(0,n,dp);
        
    }
};