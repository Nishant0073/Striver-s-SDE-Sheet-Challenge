vector<int> minHeap(int n, vector<vector<int>>& q) {
    // Write your code here.
      priority_queue<int,vector<int>,greater<int>> mxheap;
    vector<int>ans;
    for(int i=0;i<q.size();i++)
    {
        if(q[i][0]==0)
        {
            mxheap.push(q[i][1]);
        }
        else
        {
            ans.push_back(mxheap.top());
            mxheap.pop();
        }
    }
    return ans;
}
