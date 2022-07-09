void markLands(int **arr,int i,int j,int n,int m)
{
    if(i<0 || j<0 || i>=n || j>=m || arr[i][j]!=1)
        return ;
    arr[i][j] = 2;
    
    markLands(arr,i+1,j,n,m);
    markLands(arr,i-1,j,n,m);
    markLands(arr,i,j+1,n,m);
    markLands(arr,i,j-1,n,m);
    markLands(arr,i+1,j+1,n,m);
    markLands(arr,i-1,j-1,n,m);
    markLands(arr,i+1,j-1,n,m);
    markLands(arr,i-1,j+1,n,m);
    return;
    
}
int getTotalIslands(int** arr, int n, int m)
{
   // Write your code here.
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                markLands(arr,i,j,n,m);
                cnt++;
            }
        }
    }
    return cnt;
}

