#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    int cnt  = 0;
    int cand = arr[0];
    for(int i=0;i<n;i++)
    {
        if(cnt==0)
            cand=arr[i];
        if(arr[i]==cand)
            cnt++;
        else
            cnt--;
    }
    
    cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(cand==arr[i])
            cnt++;
    }
    if(cnt>floor(n/2))
        return cand;
    return -1;
}
