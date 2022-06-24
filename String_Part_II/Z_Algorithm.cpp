vector<int> z_function(string s) {
    int n = (int) s.length();
    vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}
int zAlgorithm(string s, string p, int n, int m)
{
	// Write your code here
    string temp = p+"$"+s;
    vector<int> z_f = z_function(temp);
    int cnt = 0;
  
    for(int i=0;i<z_f.size();i++)
    {
        if(z_f[i]==p.length())
            cnt++;
    }
    return cnt;
}

