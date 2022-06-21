#include <bits/stdc++.h> 

int getPath(int i,int j,int m,int n,vector<vector<int>> &dp)
{
    if(i==m-1 && j==n-1)
        return 1;
    if(i>=m || j>=n)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    return dp[i][j] = (getPath(i+1,j,m,n,dp) +getPath(i,j+1,m,n,dp));
}    
int uniquePaths(int m, int n) {
	// Write your code here.
 vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
     getPath(0,0,m,n,dp);
      if(m==1&&n==1)
            return 1;
    return dp[0][0];
}
