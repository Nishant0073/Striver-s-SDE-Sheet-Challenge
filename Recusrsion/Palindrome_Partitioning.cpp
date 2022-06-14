bool isPelindrom(int l,int r,string s)
{
    while(l<r)
    {
        if(s[l]!=s[r])
            return false;
        l++,r--;
    }
    return true;
}

void getPeli(int i,string s,vector<string> ds,vector<vector<string>> &v)
{
    if(i==s.size())
    {
        v.push_back(ds);
        return;
    }
    for(int j=i;j<s.size();j++)
    {
        if(isPelindrom(i,j,s))
        {
            ds.push_back(s.substr(i,(j-i)+1));
            getPeli(j+1,s,ds,v);
            ds.pop_back();
        }
    }
}



vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<string>ds;
    vector<vector<string>>v;
    getPeli(0,s,ds,v);
    return v;
}
