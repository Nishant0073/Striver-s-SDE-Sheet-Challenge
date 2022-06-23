int romanToInt(string s) {
    // Write your code here
    map<char,int>values = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int ans = 0;
    int s1=0,s2=0;
    for(int i=0;i<s.size();i++)
    {
        s1 = values[s[i]];
        if(i<s.size()-1)
        {
            s2 = values[s[i+1]];
            if(s1<s2)
                ans+=(s2-s1),i++;
            else
                ans+=s1;
        }
        else
            ans+=s1;
    }
    return ans;
    
}

