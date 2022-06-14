
void getSubSetSum(int ind,vector<int>& num,int sum, int n,vector<int>&ans)
{
    if(ind==n)
    {
        ans.push_back(sum);
        return;
    }
    getSubSetSum(ind+1,num,sum+num[ind],n,ans);
    getSubSetSum(ind+1,num,sum,n,ans);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int>ans;
    int n  = num.size();
    int sum = 0;
    getSubSetSum(0,num,sum,n,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
