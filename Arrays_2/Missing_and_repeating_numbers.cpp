#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	vector<int> mp(n+1,0);
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    int miss,rep;
    for(int i=1;i<=n;i++)
    {
        if(mp[i]==0)
        {
            miss=i;
        }
        if(mp[i]==2)
        {
            rep = i;
        }
    }
    return make_pair(miss,rep);
}

