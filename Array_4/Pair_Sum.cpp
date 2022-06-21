#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    int i=0,j=arr.size()-1;
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    while(i<j)
    {
        if(arr[i]+arr[j]==s)
        {
            int sm = arr[i],la = arr[j];
            int tJ = j,tI = i;
            int cnt1 = 0;
            while(j>tI && arr[j]==la)
            {
                cnt1++;
                j--;
            }
            int cnt2 = 0;
            while(i<tJ && arr[i]==sm)
            {
                cnt2++;
                i++;
            }
            vector<int>v  = {sm,la};
            int size = cnt1*cnt2;
               if(sm==la)
                   size = ((cnt1+1)*(cnt1))/2;
            for(int i=0;i<size;i++)
                ans.push_back(v);
        }
        else if(arr[i]+arr[j]<s)
            i++;
        else
            j--;
    }
    return ans;
}
