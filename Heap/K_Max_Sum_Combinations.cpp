#include<bits/stdc++.h>
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    priority_queue<pair<int,pair<int,int>>>mxheap;
    set<pair<int,int>>mp;
    mxheap.push({a[n-1]+b[n-1],{n-1,n-1}});
    mp.insert({n-1,n-1});
    vector<int>ans;
    for(int l=0;l<k;l++)
    {
        pair<int,pair<int,int>> tpair = mxheap.top();
        mxheap.pop();
        int sum = tpair.first;
        int i = tpair.second.first;
        int j = tpair.second.second;
        ans.push_back(sum);
        if(mp.find({i-1,j})==mp.end())
        {
            sum = a[i-1]+ b[j];
            mxheap.push({sum,{i-1,j}});
            mp.insert({i-1,j});
        }
        if(mp.find({i,j-1})==mp.end())
        {
            sum = a[i]+ b[j-1];
            mxheap.push({sum,{i,j-1}});
            mp.insert({i,j-1});
        }
    }
    return ans;
}
