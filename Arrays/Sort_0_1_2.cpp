#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int cnt0 = 0;
    int cnt1 = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            cnt0++;
        if(arr[i]==1)
            cnt1++;
    }
    int i=0;
    while(cnt0>0)
    {
        arr[i] = 0;
        i++,cnt0--;
    }
    while(cnt1>0)
    {
        arr[i] = 1;
        i++,cnt1--;
    }
    while(i<n)
    {
        arr[i] = 2;
        i++;
    }
}
