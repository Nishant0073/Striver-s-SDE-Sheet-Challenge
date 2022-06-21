#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    
    long long max_far = 0;
    long long max_temp = 0;
    for(int i=0;i<n;i++)
    {
        max_temp+=arr[i];
        max_far = max(max_far,max_temp);
        if(max_temp<0)
               max_temp = 0;
    }
    return max_far;
}
