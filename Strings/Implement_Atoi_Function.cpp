int atoi(string str) {
    // Write your code here.
    int ans = 0;
    int i = 0;
    bool flag = false;
    if(str[i]=='-')
    {
        i++;
        flag = true;
    }
    for( i=i;i<str.size();i++)
    {
        if(str[i]>='0' && str[i]<='9')
            ans= (ans *10) + (int(str[i]-'0'));
    }
    if(flag)
        ans*=-1;
    return ans;
}
