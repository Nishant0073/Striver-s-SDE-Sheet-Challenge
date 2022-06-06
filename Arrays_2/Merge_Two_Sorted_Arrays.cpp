#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    vector<int>v;
    for(auto it:arr1)
    {
        if(it!=0)
        {
        v.push_back(it);
        }
    }

    
    for(auto it:arr2)
    {
        if(it!=0)
        {
        v.push_back(it);
        }
    }
    sort(v.begin(),v.end());
    return v;
}
