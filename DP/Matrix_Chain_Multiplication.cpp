#include <bits/stdc++.h>
int helper(int i, int j, vector<int>&arr,vector<vector<int>>&dp )
{
    if(i==j) return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int mini = 1e9;
    for(int k=i;k<=j-1;k++)
    {
        int step = (arr[i-1] * arr[k] * arr[j])
        + helper(i,k,arr,dp) + helper(k+1,j,arr,dp);
        mini = min(step,mini);
    }
    
    return dp[i][j] = mini;
    
}
 
int matrixMultiplication(vector<int> &arr, int n)
{
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return helper(1,n-1,arr,dp);
}
