string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    string str = arr[0];
    if(n==1)
        return str;
    string ans = "";
    for(int i=0;i<str.size();i++)
    {
        bool flag = true;
        for(int j=1;j<n;j++)
        {
            if(i>=arr[j].size() || str[i]!=arr[j][i])
            {
                flag = false;
                break;
            }
        }
        if(flag)
            ans+=str[i];
        else
            break;
    }
    return ans;
}



