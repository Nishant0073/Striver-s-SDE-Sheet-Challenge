int getCnt(vector<int>v,int n,int k)
{
    int l = 0,h=n-1;
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(v[mid]<=k)
            l = mid+1;
        else
            h = mid-1;
    }
    return l;
}

int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    int rows = matrix.size();
    int col = matrix[0].size();
    int k = ((rows*col)/2);
    int l = 1,h = 1e5;
    while(l<=h)
    {
        int mid = (l+h)/2;
        int cnt = 0;
        for(int i=0;i<rows;i++)
            cnt+=getCnt(matrix[i],col,mid);
        if(cnt<=k)
            l=mid+1;
        else
            h=mid-1;
    }
    return l;
}
