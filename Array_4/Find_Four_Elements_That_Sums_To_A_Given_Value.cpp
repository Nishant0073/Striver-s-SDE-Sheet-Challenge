#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+2;j<n;j++)
        {
            int k=i+1,l=j-1;
            while(k<l)
            {
                if(arr[i]+arr[k]+arr[l]+arr[j]==target)
                    return "Yes";
                if(arr[i]+arr[k]+arr[l]+arr[j]<target)
                    k++;
                else
                    l--;
            }
        }
    }
    return "No";
}

