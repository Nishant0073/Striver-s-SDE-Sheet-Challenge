bool  isAllocate(int n,int m,vector<int> time, long long k)
{
    long long sum = 0;
    for(int i=0;i<m;i++)
    {
        if(sum+time[i]<=k)
        {
            sum+=time[i];
        }
        else
        {
            n--;
            if(n<=0 || time[i]>k)
                return false;
            sum=time[i];
        }
    }
     
    return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
    long long low = time[0];
    long long high = 0;
    for(int i=0;i<m;i++)
    {
        low = min((int)low,time[i]);
        high = high+time[i];
    }
    while(low<=high)
    {
        long long mid = (low+high)>>1;
        if(isAllocate(n,m,time,mid))
            high = mid-1;
        else
            low  = mid+1;   
    }
    return low;
}
