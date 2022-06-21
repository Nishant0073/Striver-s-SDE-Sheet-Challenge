#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int num1 = -1, num2 = -1, cnt1 = 0, cnt2 = 0;
    int n = arr.size();
    for(int i=0;i<n;i++)
    { 
       if(num1==arr[i])
          cnt1++;
      else if(num2==arr[i])
          cnt2++;
      else if(cnt1==0)
      {
          num1 = arr[i];
          cnt1=1;
      }
      else if(cnt2==0)
      {
          num2 = arr[i];
          cnt2=1;
      }
       else
       {
           cnt1--;
           cnt2--;
       }
    }
    vector<int> v;
    int nd = floor(n/3);
    cnt1 = 0,cnt2= 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num1)
            cnt1++;
        if(arr[i]==num2)
            cnt2++;
    }
    if(cnt1>nd)
        v.push_back(num1);
    if(cnt2>nd)
        v.push_back(num2);
    if(v.size()==2 && v[0]>v[1])
        swap(v[0],v[1]);
    
       return v;
    

}
