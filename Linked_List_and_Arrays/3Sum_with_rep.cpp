#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    int i=0;
    while(i<n)
    {
        int j=i+1,k=n-1;
        while(j<k)
        {
             if(arr[i]+arr[j]+arr[k]==K)   
             {
                 vector<int> v = {arr[i],arr[j],arr[k]};
                 ans.push_back(v);
                 int tj = j,tk=k;
                 while(j<k && arr[tj]==arr[j])
                     j++;
                 while(k>j && arr[tk]==arr[k])
                     k--;
             }
            else if(arr[i]+arr[j]+arr[k]<K)
                j++;
            else
                k--;
        }
        int ti = i;
        while(arr[ti]==arr[i])
            i++;
    }
    return ans;
}
