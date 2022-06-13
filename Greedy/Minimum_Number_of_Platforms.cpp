
 
int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int cnt = 1;
    int maxans = 1;
    int j=0,i = 1;
    while(i<n && j<n)
    {
        if(at[i]<=dt[j])
        {
            cnt++;
            i++;
        }
        else
        {
            cnt--;
            j++;
        }
        maxans = max(maxans,cnt);
    }
    return maxans;
}
