#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    int ans = 0,cnt = 0;
   set<int>mp;
    for(int i=0;i<n;i++)
        mp.insert(arr[i]);
    
    int  curr = 0;
    for(int it:mp)
    {
         if(cnt==0)
             cnt = 1;
        else
        {
            if(it==curr+1)
                cnt++;
            else
                cnt = 1;
        }
        ans = max(ans,cnt);
        curr=it;
    }
    return ans;
    // Write your code here.
}

