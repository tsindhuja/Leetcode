class Solution {
public:
     int series(int n, int dp[]){
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
         
        
        if(dp[n] != -1) return dp[n];
        
      
        return dp[n] = series(n-1,dp) + series(n-2, dp) + series(n-3, dp);
        
        
    }
    int tribonacci(int n) {
        int dp[n+1] ;
         memset(dp, -1, sizeof(dp));
        return series(n, dp);
    }
};