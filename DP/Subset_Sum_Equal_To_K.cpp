#define ll long long
int fun(int ind,int target,vector<int> &arr,vector<vector<ll>> &dp)
{
	if(target<0 || ind<0)
		return 0;
	if(dp[ind][target]!=-1)
		return dp[ind][target];
	if(target==arr[ind])
		return dp[ind][target]=1;
	return dp[ind][target]=(fun(ind-1,target-arr[ind],arr,dp) | fun(ind-1,target,arr,dp));
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
	vector<vector<ll>> dp(n+1,vector<ll>(k+1,-1));
	if(fun(n-1,k,arr,dp))
		return true;
	else 
		return false;
}
