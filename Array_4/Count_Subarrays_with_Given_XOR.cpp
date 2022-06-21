#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    unordered_map<int,int>vis;
    int cxor = 0;
    int cnt = 0;
    for(int i=0;i<arr.size();i++)
    {
        cxor ^= arr[i];
        if(cxor==x)
               cnt++;
        int h = cxor ^ x;
        if(vis.find(h)!=vis.end())
            cnt+=vis[h];
        vis[cxor]++;
    }
    return cnt;
}
