#include<bits/stdc++.h>
void getCombSum(int i,int sum,vector<int>ds,vector<int> &arr,vector<vector<int>> &v,int n,int k)
{
    if(i==n)
    {
        if(sum==k)
            v.push_back(ds);
        return;
    } 
    ds.push_back(arr[i]);
    getCombSum(i+1,sum+arr[i],ds,arr,v,n,k);
    ds.pop_back();
    if(ds.size()>0 && ds[ds.size()-1]==arr[i])
        return;
    getCombSum(i+1,sum,ds,arr,v,n,k);
}


vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	// Write your code here.
    vector<int>ds;
    vector<vector<int>>v;
    sort(arr.begin(),arr.end());
     getCombSum(0,0,ds,arr,v,n,target);
    return v;
}

