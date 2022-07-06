
void dfsGraph(vector<int> &ans,int curr,unordered_map<int,vector<int>> &edges,vector<bool>&vis)
{
    vis[curr] = true;
    ans.push_back(curr);
    for(auto it:edges[curr])
    {
       // cout<<it<<endl;
        if(!vis[it])
            dfsGraph(ans,it,edges,vis);
    }
     
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    unordered_map<int,vector<int>>adj;
    for(int i=0;i<edges.size();i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool>vis(V,false);
    vector<vector<int>>ans;
    for(int i=0;i<V;i++)
    {
       
         if(vis[i]==false)
         {
            // cout<<i<<endl;
             vector<int>temp;
             dfsGraph(temp,i,adj,vis);
            if(temp.size()!=0)
                ans.push_back(temp);
         }
      
    }
    return ans;
}
