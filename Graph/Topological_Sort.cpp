#include<bits/stdc++.h>
void dfs(vector<int> gp[],vector<bool>&vis,stack<int> &st,int i)
{
    vis[i] = true;
    for(auto it:gp[i])
    {
        if(!vis[it])
            dfs(gp,vis,st,it);
    }
    st.push(i);
    
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    vector<int> gp[v];
    for(int i=0;i<e;i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        gp[u].push_back(v);
    }
    stack<int>st;
    vector<int>ans;
    vector<bool> vis(v,false);
    for(int i=0;i<v;i++)
    {
        if(!vis[i])
           dfs(gp,vis,st,i);
    }
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
