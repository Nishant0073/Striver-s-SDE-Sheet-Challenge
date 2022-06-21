

void findSum(int ind,int sum,vector<int> ds,vector<int> arr,int n,int k,vector<vector<int>> &v)
{
    if(ind==n)
    {
        if(sum==k)
            v.push_back(ds);
        return;
    }
    ds.push_back(arr[ind]);
     findSum(ind+1,sum+arr[ind],ds,arr,n,k,v);
    ds.pop_back();
     findSum(ind+1,sum,ds,arr,n,k,v);
     
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>>v;
    vector<int>ds;
    findSum(0,0,ds,arr,n,k,v);
    return v;
}
