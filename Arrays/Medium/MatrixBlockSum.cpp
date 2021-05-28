/* 
Problem at https://leetcode.com/problems/matrix-block-sum/

*/


/*
Solution 1: Time complexity - O(n*m)

*/
class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
         vector<vector<int>> dp(n+1,vector<int>(m+1,0));
             
        for(int i=1;i<=n;i++){
            
            for(int j=1;j<=m;j++){
                dp[i][j]=mat[i-1][j-1]+dp[i][j-1]+dp[i-1][j]-dp[i-1][j-1];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int i1=max(0,i-k), j1=max(0,j-k);
                int i2=min(n-1,i+k), j2=min(m-1,j+k);
                i1++, i2++, j1++, j2++;
                ans[i][j]=dp[i2][j2]-dp[i2][j1-1]-dp[i1-1][j2]+dp[i1-1][j1-1];
                        
                
            }
        }
        return ans;
    }
};

/*
Solution 2: Time complexity - O(n*m*k)

*/
class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
         vector<vector<int>> pref(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            pref[i][0]=mat[i][0];
            for(int j=1;j<m;j++){
                pref[i][j]=pref[i][j-1]+mat[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int x=max(0,i-k);x<=min(n-1,i+k);x++){
                    int right=min(m-1,j+k);
                    int left = max(0,j-k);
                    ans[i][j]+=pref[x][right];
                    if(left!=0) ans[i][j]-=pref[x][left-1];
                        
                }
            }
        }
        return ans;
    }
};