#include<bits/stdc++.h>
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    // Write your code here
	unordered_map<int,int>mp;
    int dis_cnt = 0;
    
    for(int i=0;i<k;i++)
    {
        if(mp[arr[i]]==0)
            dis_cnt++;
        mp[arr[i]]++;
    }
    vector<int>v;
    v.push_back(dis_cnt++);
    dis_cnt--;
    
    for(int i=k;i<arr.size();i++)
    {
        if(mp[arr[i-k]]==1)
        {
            dis_cnt--;
        }
        mp[arr[i-k]]-=1;
        if(mp[arr[i]]==0)
            dis_cnt++;
        
        mp[arr[i]]++;
        v.push_back(dis_cnt);
    }
     return v;
}

