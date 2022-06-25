#include<bits/stdc++.h>
vector<int> computelps(string s)
{
    int n = s.length();
    vector<int>lps(n);
    int len = 0;
    int i=1;
    while(i<n)
    {
        if(s[i]==s[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if(len!=0)
            {
                len = lps[len-1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return  lps;
}

int minCharsforPalindrome(string str) {
	// Write your code here.
    string revStr = str;
    reverse(revStr.begin(),revStr.end());
    string con = str+"$"+revStr;
    vector<int> lps = computelps(con);
    return  (str.length()-lps.back());
}

