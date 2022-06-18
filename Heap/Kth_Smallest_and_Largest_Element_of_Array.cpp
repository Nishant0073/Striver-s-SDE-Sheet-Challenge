#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
    priority_queue<int,vector<int>>mxheap;
    priority_queue<int,vector<int>,greater<int>>mnheap;
    for(auto it:arr)
    {
        mxheap.push(it);
        mnheap.push(it);
    }
    while(k>1)
    {
        mxheap.pop();
        mnheap.pop();
        k--;
    }
    vector<int>ans;
    ans.push_back(mnheap.top());
    ans.push_back(mxheap.top());
    return ans;
}
