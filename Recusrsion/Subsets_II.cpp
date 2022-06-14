#include<bits/stdc++.h>
void getUniqueSubsets(int ind,vector<int> ds,vector<int> &arr,int n,vector<vector<int>> &v)
{
    if(ind>=n)
    {
        v.push_back(ds);
        return;
    }
    
    int currInd = ind;
    ds.push_back(arr[ind]);
    getUniqueSubsets(ind+1,ds,arr,n,v);
    ds.pop_back();
   if(ds.size()>0 && ds[ds.size()-1]==arr[ind])
   {
       return;
   }
    getUniqueSubsets(ind+1,ds,arr,n,v);
            
    return;
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>>v;
    vector<int> ds;
    sort(arr.begin(),arr.end());
    getUniqueSubsets(0,ds,arr,n,v);
    sort(v.begin(),v.end());
    return v;
}
