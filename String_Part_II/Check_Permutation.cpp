#include<bits/stdc++.h>
bool areAnagram(string &str1, string &str2){
    // Write your code here.
     map<char,int>mp;
    int i;
    for(i=0;str1[i] && str2[i];i++)
    {
        mp[str1[i]]++;
        mp[str2[i]]--;
    }
    if(str1[i] || str2[i])
        return false;
    for(auto it:mp)
    {
        if(it.second!=0)
            return false;
    }
    return true;
}
