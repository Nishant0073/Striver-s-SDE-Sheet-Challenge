#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    unordered_map<int,int>mp;
    int maxLen = 0,sum = 0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        if(sum==0)
        {
            maxLen = max(i+1,maxLen);
        }
        else
        {
            if(mp.find(sum)!=mp.end())
            {
                maxLen = max(maxLen,i-mp[sum]);
            }
            else
            {
                mp[sum] = i;
            }
        }
    }
    return maxLen;
}
