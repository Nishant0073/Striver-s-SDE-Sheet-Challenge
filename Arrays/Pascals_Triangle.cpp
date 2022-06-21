#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>>v;
    vector<long long int>temp;
    temp.push_back(1);
    v.push_back(temp);
    if(n==1)
           return v;
    temp.push_back(1);
    v.push_back(temp);
    if(n==2)
        return v;
    for(int i=3;i<=n;i++)
    {
        vector<long long int>te;
        te.push_back(1);
        for(int j=1;j<i-1;j++)
        {
            te.push_back(v[i-2][j]+v[i-2][j-1]);
        }
        te.push_back(1);
        v.push_back(te);
    }
    return v;
}

