#include<bits/stdc++.h>
void getAllPerm(int i,int n,string s,vector<string> &v)
{
    if(i==n)
    {
        v.push_back(s);
        return;
    }
    
    for(int j=i;j<n;j++)
    {
        swap(s[i],s[j]);
        getAllPerm(i+1,n,s,v);
        swap(s[i],s[j]);
    }
    return;
}

vector<string> findPermutations(string &s) {
    // Write your code here.
    int n = s.size();
    string perm = "";
    vector<string>v;
    getAllPerm(0,n,s,v);
    return v;
}
