#include<bits/stdc++.h>
string writeAsYouSpeak(int n) 
{
	// Write your code here.
    string str = "1";
    if(n==1)
        return str;
    for(int i=2;i<=n;i++)
    {
        string temp="";
        int j=0;
        char ck;
        int cnt = 0;
        while(j<str.size())
        {
             ck = str[j];
             cnt = 0;
            while(j<str.size() && ck==str[j])
            {
                j++;
                cnt++;
            }
                     
                temp+=to_string(cnt)+ck;
    
        }
        str = temp;
    }
    return str;
    
}
