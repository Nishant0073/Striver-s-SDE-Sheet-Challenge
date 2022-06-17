bool isAllPlace(vector<int>pos,int n,int c,int k)
{
    int cnt = 1;
    int lastPlace = pos[0];
    for(int i=1;i<n;i++)
    {
        if(pos[i]-lastPlace>=k)
        {
            cnt++;
            lastPlace = pos[i];
        }
        if(cnt>=c)
            return true;
    }
    return false;
}

int chessTournament(vector<int> positions , int n ,  int c){
	// Write your code here
    sort(positions.begin(),positions.end());
    
    int l = 1;
    int r = positions[positions.size()-1]-positions[0];
    while(l<=r)
    {
        int mid = (l+r) >> 1;
        if(isAllPlace(positions,n,c,mid))
            l = mid+1;
        else
            r = mid-1;
    }
    return r;
    
    
    
}
