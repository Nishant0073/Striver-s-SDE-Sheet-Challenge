#include<bits/stdc++.h>
bool dfs(int curr,map<int,vector<int>> adj,vector<bool> &vis,int par)
{
    vis[curr] = true;
    for(it:adj[curr])
    {
        if(!vis[it])
        {
            if(dfs(it,adj,vis,curr))
                return true;
        }
        else if(it!=par)
            return true;
            
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    map<int,vector<int>> adj;
    for(int i=0;i<m;i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    
    vector<bool> vis(n,false);
    
    for(int i=1;i<=n;i++)
    {
        if(!vis[i] && dfs(i,adj,vis,-1))
        {
            return "Yes";
        }
    }
    return "No";
}

