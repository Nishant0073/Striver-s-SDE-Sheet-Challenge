#include<bits/stdc++.h>
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
     priority_queue<int, vector<int> , greater<int> >mxpq;
   
    for(int i=0;i<kArrays.size();i++)
    {
        for(int j=0;j<kArrays[i].size();j++)
        {
            mxpq.push(kArrays[i][j]);
        }
    }
    vector<int>ans;
    while(mxpq.size()!=0)
    {
        ans.push_back(mxpq.top());
        mxpq.pop();
    }
    return ans;
}
